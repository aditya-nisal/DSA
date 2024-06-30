#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

class Node{
    private:
        int val;
        Node* next;
    
    public:
        Node(): val(0), next(nullptr){}
        Node(int x): val(x), next(nullptr){}
        Node(int x, Node* next): val(x), next(next){}
        void PrintList(Node* n);
    
};
void Node::PrintList(Node* n)
{
    while(n!=nullptr)
    {
        std::cout<<n->val<<std::endl;
        n = n->next;
    }
}

int main() {
    Node* first = new Node(10);
    Node* head = new Node(5, first);
    first->PrintList(head);
    head->PrintList(head);
    
    Node* m;
    m->PrintList(head);
    
    Node n;
    n.PrintList(head);

    return 0;
}