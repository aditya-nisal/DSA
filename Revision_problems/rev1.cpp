#include <iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

template<typename T>
class Node
{
    private:
    T val;
    Node* next;

    public:
    Node(): val(0), next(nullptr){}
    Node(T x): val(x), next(nullptr){}
    Node(T x, Node* n): val(x), next(n){}
    void PrintList(Node<T>* n);
    T GetValue(Node<T>* node)const;
    T GetValueFromIndex(Node<T>*, int) const;
    Node<T>* Increase(Node<T>* node);
    Node<T>* push(Node<T>* n, Node<T>* node);
    Node<T>* pop(Node<T>* node);
    Node<T>* top(Node<T>* node);
    Node<T>* Allocate(int i, Node* node, Node* head);
};

template<typename T>
void Node<T>::PrintList(Node<T>* n)
{
    while(n!=nullptr)
    {
        std::cout<<n->val<<std::endl;
        n=n->next;
    }
}

template<typename T>
T Node<T>::GetValue(Node<T>* node) const
{
    return node->val;
}

template<typename T>
T Node<T>::GetValueFromIndex(Node<T>* node, int i) const
{
    int j=0;
    while(node->next != nullptr)
    {
        if(i==j)
        {
            break;
        }
        node = node->next;
        ++j;
    }
    return node->val;
}

template<typename T>
Node<T>* Node<T>::Increase(Node<T>* node)
{
    return node->next;
}

template<typename T>
Node<T>* Node<T>::push(Node<T>* n, Node<T>* node)
{
    while(node->next != nullptr)
    {
        node = node->next;
    }
    node->next = n;
}

template<typename T>
Node<T>* Node<T>::pop(Node<T>* node)
{
    while(node->next->next != nullptr)
    {
        node = node->next;
    }
    node->next = nullptr;
}

template<typename T>
Node<T>* Node<T>::top(Node<T>* node)
{
    while(node->next != nullptr)
    {
        node = node->next;
    }
    return node;
}
template<typename T>
Node<T>* Node<T>::Allocate(int i, Node* node, Node* head)
{
    int j = 0;
    while (j != i-1)
    {
        head = head->next;
        ++j;
    }
    Node<T>* temp = head->next;
    head->next = node;
    node->next = temp;
}


int main()
{
    Node<double>* fifth = new Node<double>(5.5);
    Node<double>* fourth = new Node<double>(4.0, fifth);
    Node<double>* third = new Node<double>(3.2, fourth);
    Node<double>* second = new Node<double>(2.8, third);
    Node<double>* head = new Node<double>(1.1, second);
    head->PrintList(head);
    // std::cout<<head->GetValue(head)<<std::endl;
    // Node<double>* a = head->Increase(head);
    // std::cout<<head->GetValue(a)<<std::endl;
    Node<double>* n_ = new Node<double>(6.2);
    head->push(n_, head);
    std::cout<<(head->GetValue(head->top(head)))<<std::endl;
    head->pop(head);
    std::cout<<(head->GetValue(head->top(head)))<<std::endl;
    Node<double>* nn_= new Node(4.1);
    head->Allocate(2, head, nn_);
    std::cout<<"Printing new node"<<std::endl;
    std::cout<<head->GetValueFromIndex(head, 3)<<std::endl;

    return 0;
}