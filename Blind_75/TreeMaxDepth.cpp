#include <iostream>
#include <stack>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
//DFS
    int maxDepthDFS(TreeNode* root) {
        std::stack<std::pair<TreeNode*, int>> tree;
        tree.push({root, 1});
        int depth=0;

        while(!tree.empty())
        {   
            pair<TreeNode*, int> current = tree.top();
            tree.pop();
            TreeNode* node = current.first;
            int depth_new = current.second;

            if(node!=nullptr)
            {
                depth = max(depth, depth_new);
                tree.push({node->left, depth_new+1});
                tree.push({node->right, depth_new+1});
            }
        }

        return depth;
    }
    
    //BFS
    int maxDepthBFS(TreeNode* root)
    {
        std::queue<TreeNode*> q;
        if (root!=nullptr)
        {
            q.push(root);
        }

        int level = 0;
        while(!q.empty())
        {
            int size = q.size();
            for (int i=0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(node->left != nullptr)
                {
                    q.push(node->left);
                }
                
                if(node->right != nullptr)
                {
                    q.push(node->right);
                }
            }
            level ++;   
        }
        return level;
    }
};

int main()
{
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node2 = new TreeNode(2, node4, node5);
    
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node1 = new TreeNode(1, node2, node3);
    
    Solution S;
    
    std::cout<<S.maxDepthDFS(node1)<<std::endl;
    std::cout<<S.maxDepthBFS(node1)<<std::endl;
}

