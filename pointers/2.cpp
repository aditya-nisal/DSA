// Void pointer

#include <iostream>
using namespace std;

// Functions for specefic data-type pointers

void printNumber (int* numberPtr) // We are passing the pointer to the function. Meaning, to call the function, it takes in the address of the variable
{
    cout<<*numberPtr<<endl; // We call the deferenced pointer *numberPtr to access the value
}

void printLetter (char* charPtr) // We are passing the pointer to the function. Meaning, to call the function, it takes in the address of the variable
{
    cout<<*charPtr<<endl; // We call the deferenced pointer *charPtr to access the value
}

void print(void* ptr, char type) // Can't directly dereference a void pointer and will need to pass the data-type
{
    switch(type)
    {
        case 'i': cout<<*((int* )ptr)<<endl; break;// Cast the void pointer to int pointer->(int* )ptr. 
                                // Dereferencing the value and access the address that the int point is storing->*((int*)ptr)
        case 'c': cout<<*((char* )ptr)<<endl; break;  //
    }
}
int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
    
}