#include <iostream>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;

        if (p && q && p->val == q->val)
        {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }

        else
        {
            return false;
        }
    }
};


int main() {
    // Constructing a simple tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    TreeNode* Node4_p = new TreeNode(4);
    TreeNode* Node5_p = new TreeNode(5);
    TreeNode* Node2_p = new TreeNode(2, Node4_p, Node5_p);
    
    TreeNode* Node3_p = new TreeNode(3);
    
    TreeNode* Node1_p = new TreeNode(1, Node2_p, Node3_p);
    
    TreeNode* Node4_q = new TreeNode(4);
    TreeNode* Node5_q = new TreeNode(5);
    TreeNode* Node2_q = new TreeNode(2, Node4_q, Node5_q);
    
    TreeNode* Node3_q = new TreeNode(3);
    
    TreeNode* Node1_q = new TreeNode(1, Node2_q, Node3_q);
    
    Solution S;
    std::cout<<S.isSameTree(Node1_p, Node1_q);
    
    // std::cout << Node1->val;

    return 0;
