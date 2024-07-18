#include<iostream>
#include <vector>

using namespace std;

class TreeNode
{
    public:
        int value;
        std::vector<TreeNode*> Children;

        TreeNode(int val): value(val){}
        void AddChildNode(TreeNode* child){
            Children.push_back(child);
        }
        ~TreeNode()
        {
            for (TreeNode* child : Children)
                delete child;
        }
};

void printTree(TreeNode* node, int level = 0) {
    if (node == nullptr) {
        return;
    }
    std::string indent(level * 2, ' '); // Create an indent string for better visualization
    std::cout << indent << node->value << std::endl;
    for (TreeNode* child : node->Children) {
        printTree(child, level + 1); // Recursive call for each child
    }
}


int main()
{
    TreeNode* root = new TreeNode(5);
    TreeNode* child1 = new TreeNode(4);
    TreeNode* child2 = new TreeNode(3);
    root->AddChildNode(child1);
    root->AddChildNode(child2);

    printTree(root);
    delete root;
return 0;
}