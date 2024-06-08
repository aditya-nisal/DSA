#include <iostream>

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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};


int main() {
    // Write C++ code here
    TreeNode* Node4 = new TreeNode(4);
    TreeNode* Node5 = new TreeNode(5);
    TreeNode* Node2 = new TreeNode(2, Node4, Node5);
    
    TreeNode* Node6 = new TreeNode(6);
    TreeNode* Node7 = new TreeNode(7);
    TreeNode* Node3 = new TreeNode(3, Node6, Node7);

    TreeNode* Node1 = new TreeNode(1, Node2, Node3);
    Solution S;
    S.invertTree(Node1);
    std::cout<<Node1->left->val<<std::endl;
    return 0;
}
