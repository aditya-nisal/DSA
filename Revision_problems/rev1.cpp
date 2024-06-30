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
    Node<T>* Increase(Node<T>* node);
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
// Node<T>& operator++(Node<T>& m)
// {
//     if(m.next != nullptr)
//     {
//         m= m.next;
//         return m;
//     }
//     else
//     {
//         throw::std::out_of_range("No next node available");
//     }
// }
Node<T>* Node<T>::Increase(Node<T>* node)
{
    return node->next;
}



int main()
{
    Node<double>* fifth = new Node<double>(5.5);
    Node<double>* fourth = new Node<double>(4.0, fifth);
    Node<double>* third = new Node<double>(3.2, fourth);
    Node<double>* second = new Node<double>(2.8, third);
    Node<double>* head = new Node<double>(1.1, second);
    head->PrintList(head);
    std::cout<<head->GetValue(head)<<std::endl;
    Node<double>* a = head->Increase(head);
    std::cout<<head->GetValue(a)<<std::endl;


    return 0;
}