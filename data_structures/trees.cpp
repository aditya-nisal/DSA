#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<stack>
using namespace std;

class Node
{ 
  private:
    int data;
    Node* left;
    Node* right;

  public:
  // New lines
  Node():data(0), left(nullptr), right(nullptr){}
  Node(int x):data(x), left(nullptr), right(nullptr){}
  Node(int x, Node *left, Node* right):data(x), left(left), right(right){}
  void PrintNodeBFS(Node* node);
  void PrintNodeDFS(Node* node);
};

void Node::PrintNodeBFS(Node* node)
{
  std::queue<Node*> search;
  search.push(node);
  while(!search.empty())
  {
    Node* t = search.front();
    search.pop();
    std::cout<<t->data<<std::endl;
    if(t->left != nullptr)
    {
      search.push(t->left);
    }
    if(t->right != nullptr)
    {
      search.push(t->right);
    }

  }
}

// void Node::PrintNodeDFS(Node* node)
// {
  
// }

int main()
{
    Node* ChildNode4 = new Node(4);
    Node* ChildNode5 = new Node(5);
    Node* ChildNode2 = new Node(2, ChildNode4, ChildNode5);
    Node* ChildNode3 = new Node(3);
    Node* rootNode = new Node(1, ChildNode2, ChildNode3);
    rootNode->PrintNodeBFS(rootNode);

    return 0;
}