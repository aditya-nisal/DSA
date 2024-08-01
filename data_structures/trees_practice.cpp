// #include <iostream>
// #include <vector>
// #include <string>

// class TreeNode {
// public:
//     char value;
//     std::vector<TreeNode*> children;

//     TreeNode(char val) : value(val) {}

//     ~TreeNode() {
//         for (auto child : children) {
//             delete child;
//         }
//     }

//     // Add child node
//     void addChild(TreeNode* node) {
//         children.push_back(node);
//     }
// };

// TreeNode* intersectTrees(TreeNode* root1, TreeNode* root2) {
//     if (root1 == nullptr || root2 == nullptr || root1->value != root2->value) {
//         return nullptr;
//     }

//     TreeNode* intersectedNode = new TreeNode(root1->value);

//     for (TreeNode* child1 : root1->children) {
//         for (TreeNode* child2 : root2->children) {
//             if (child1->value == child2->value) {
//                 TreeNode* childIntersection = intersectTrees(child1, child2);
//                 if (childIntersection != nullptr) {
//                     intersectedNode->addChild(childIntersection);
//                 }
//             }
//         }
//     }

//     return intersectedNode;
// }

// void printTree(TreeNode* node, int level = 0) {
//     if (!node) return;
//     std::cout << std::string(level * 2, ' ') << node->value << "\n";
//     for (TreeNode* child : node->children) {
//         printTree(child, level + 1);
//     }
// }


// int main() {
//     // Tree 1
    // TreeNode* A1 = new TreeNode('A');
    // TreeNode* B1 = new TreeNode('B');
    // TreeNode* C1 = new TreeNode('C');
    // TreeNode* D1 = new TreeNode('D');
    // TreeNode* E1 = new TreeNode('E');
    // A1->addChild(B1);
    // A1->addChild(C1);
    // C1->addChild(E1);
    // C1->addChild(D1);
    // printTree(A1);
    // // Tree 2
    // TreeNode* A2 = new TreeNode('A');
    // TreeNode* C2 = new TreeNode('C');
    // TreeNode* E2 = new TreeNode('E');
    // TreeNode* F2 = new TreeNode('F');
    // A2->addChild(C2);
    // C2->addChild(F2);
    // C2->addChild(E2);
    // printTree(A2);
    // // Intersection of trees
    // TreeNode* intersection = intersectTrees(A1, A2);

    // // Print the result
    // printTree(intersection);

    // // Cleanup
    // delete A1;
    // delete A2;
    // delete intersection;

//     return 0;
// }


// // Add template
// // Check if both trees belong to same datatype

#include <iostream>
#include <vector>
#include <string>

template<typename T>
class TreeNode {
public:
    T value;
    std::vector<TreeNode<T>*> children;

    TreeNode(T val) : value(val) {}

    ~TreeNode() {
        for (auto child : children) {
            delete child;
        }
    }

    // Add child node
    void addChild(TreeNode<T>* node) {
        children.push_back(node);
    }
};


template<typename T>
TreeNode<T>* intersectTrees(TreeNode<T>* root1, TreeNode<T>* root2) {
    if (root1 == nullptr || root2 == nullptr || root1->value != root2->value) {
        return nullptr;
    }

    TreeNode<T>* intersectedNode = new TreeNode<T>(root1->value);

    for (TreeNode<T>* child1 : root1->children) {
        for (TreeNode<T>* child2 : root2->children) {
            if (child1->value == child2->value) {
                TreeNode<T>* childIntersection = intersectTrees(child1, child2);
                if (childIntersection != nullptr) {
                    intersectedNode->addChild(childIntersection);
                }
            }
        }
    }

    return intersectedNode;
}


template<typename T>
void printTree(TreeNode<T>* node, int level = 0) {
    if (!node) return;
    std::cout << std::string(level * 2, ' ') << node->value << "\n";
    for (TreeNode<T>* child : node->children) {
        printTree(child, level + 1);
    }
}


int main() {
    // // Integer tree example
    // TreeNode<int>* root1 = new TreeNode<int>(1);
    // TreeNode<int>* root2 = new TreeNode<int>(1);
    // root1->addChild(new TreeNode<int>(2));
    // root2->addChild(new TreeNode<int>(2));
    // std::cout<<"Tree one"<<std::endl;
    // printTree(root1);

    // std::cout<<"Tree Two"<<std::endl;
    // printTree(root2);

    // TreeNode<int>* intTree = intersectTrees(root1, root2);
    // std::cout<<"Intersection"<<std::endl;    
    // printTree(intTree);

    // delete root1;
    // delete root2;
    // delete intTree;

    // String tree example
    TreeNode<std::string>* sroot1 = new TreeNode<std::string>("one");
    TreeNode<std::string>* sroot2 = new TreeNode<std::string>("one");
    sroot1->addChild(new TreeNode<std::string>("two"));
    sroot2->addChild(new TreeNode<std::string>("two"));
    TreeNode<std::string>* strTree = intersectTrees(sroot1, sroot2);
    printTree(strTree);

    delete sroot1;
    delete sroot2;
    delete strTree;

    return 0;
}
