#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
  int data;
  Node* left;
  Node* right;

  // New lines
  Node():data(0), left(nullptr), right(nullptr){}
  Node(int x):data(x), left(nullptr), right(nullptr){}
  Node(int x, Node *left, Node* right):data(0), left(left), right(right){}
};

// Node* createNode(int data)
// {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = nullptr;
//     return newNode;
// }

// int getNodeData(Node* node)
// {
//     int data = node->data;
//     return data;
// }

// int main()
// {
//     Node* rootNode = createNode(5);
//     rootNode->left = createNode(3);
//     rootNode->right = createNode(4);
//     rootNode->left->left = createNode(3);
//     rootNode->left->right = createNode(3);
//     rootNode->right->left = createNode(4);
//     rootNode->right->right = createNode(4);
//     std::cout<<getNodeData(rootNode)<<std::endl;
//     std::cout<<getNodeData(rootNode->left)<<std::endl;
//     std::cout<<getNodeData(rootNode->right)<<std::endl;
//     return 0;
// }

int main()
{
    Node* ChildNode1 = new Node(2);
    Node* ChildNode2 = new Node(3);
    Node* rootNode = new Node(5, ChildNode1, ChildNode2);
    return 0;
}