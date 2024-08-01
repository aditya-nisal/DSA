// Function Pointer: To pass function to another function as an argument

#include <iostream>
using namespace std;

int getNumber()
{
    return 5;
}

int add(int a, int b)
{
    return a+b;
}

int main()

{
    cout<<getNumber()<<endl;
    cout<<getNumber<<endl; // We get an address of our function

    int (* funcPtr)() = getNumber; // Return type (* pointer_name)(parameters passed (here its no params))
    // Function pointer that points to getNumber function with int return type
    cout<<funcPtr()<<endl;

    cout<<add(8, 2)<<endl;
    int (* fPtr)(int, int) = add;
    cout<<fPtr(8, 2)<<endl;
    return 0;
}