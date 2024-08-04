#include<iostream> 
using namespace std;

class c1
{
    private:
        static int s;
    
    public:
        c1()
        {
            ++s;
            cout<<"Class initialized "<<s<<" times"<<endl;
        }

};
int c1::s = 0;

void func()
{
    static int count = 0;
    ++count;
    cout<<"Function has been called "<<count<<" times"<<endl;
}

int main()
{
    func();
    func();
    func();
    func();
    func();
    func();
    c1 c;
    c1 c2;
    c1 c3;
    return 0;
}