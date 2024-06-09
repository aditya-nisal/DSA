#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main() {
std::stack<int, std::vector<int>> s;
s.push(5);
s.push(4);
s.push(3);
s.push(2);
s.push(1);
s.push(0);
int top = s.top();
cout<<top<<endl;
for (int i=0; i<6; i++)
{
    s.pop();
    cout<<s.size()<<endl;
    if(s.empty())
    {
        cout<<"Stack emptied"<<endl;
    }
}

std::queue<int> q;
q.push(5);
q.push(4);
q.push(3);
q.push(2);
q.push(1);
q.push(0);
int front = q.front();
cout<<"front: "<<front<<endl;
int back = q.back();
cout<<"back: "<<back<<endl;
for (int i=0; i<6; ++i)
{
    q.pop();
    cout<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"Queue emptied"<<endl;
    }
}

    return 0;
}
