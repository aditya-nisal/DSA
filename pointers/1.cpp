// What are pointers and how they work

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // An int variable
    cout<<n<<endl; 
    cout<<&n<<endl; // Address of the int variable
    int *ptr = &n; // ptr is the pointer to the n of type int. So the pointer ptr stores the address of the n variable. 
    //Pointer needs to be of the same type it points to
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // Deferencing the pointer ptr: *ptr. Deferencing lets us access the value at that address
    // Any *ptr means please access that memory location
    *ptr = 10; //*ptr is already 10. We are accessing the value at the ptr address and defining it as 10.
    //Since n and ptr have the same address, the values will also be the same.
    cout<<*ptr<<endl;
    cout<<n<<endl;

    // int* ptr2;
    // *ptr2 = 5;
    // cout<<*ptr2<<endl;
    // THe above wont work as ptr2 does not have an address to store the int type. Both do have same data types, but it does not have an address.

    int v;
    int* ptr2 = &v; // ptr now points to the address of the integer vatiable v
    *ptr2 = 5;
    cout<<*ptr2<<endl;
    cout<<v<<endl;

    return 0;
}