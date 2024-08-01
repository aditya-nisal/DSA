#include<iostream>
#include<memory> // Need to include this to use smart pointer
using namespace std;

class MyClass
{
    public:
        MyClass()
        {
            cout<<"Constructor invoked"<<endl;
        }
        
        ~MyClass()
        {
            cout<<"Destructor invoked"<<endl;
        }
};

int main()
{
    unique_ptr<int>unPtr1 = make_unique<int>(25); // Creating a unique pointer to int object. make_unique: make a unique pointer of integer type.
    //Stored a value of 25
    cout<< *unPtr1 <<endl;
    // unique_ptr<int>unPtr2 = unPtr1; // Cannot share unique pointer ownership
    unique_ptr<int>unPtr2 = move(unPtr1); // But ownership can be moved to another unique pointer
    cout<<*unPtr2<<endl;
    // cout<< *unPtr1 <<endl; // Now unPtr1 will become empty and will not hold the ownership anymore. THe memory is deallocated on its own.


    unique_ptr<MyClass>unClassptr = make_unique<MyClass>(); // Creating a unique ptr to class type obj


    shared_ptr<MyClass>ShPtr1 = make_shared<MyClass>(); // Creating a shared ptr to class type obj
    cout<<"Shared Count: "<<ShPtr1.use_count()<<endl; // Getting the number of owners of the memory location: ShPtr1. 
    // RN 1 as only one pointer pointing to that memory location
    shared_ptr<MyClass>ShPtr2 = ShPtr1;
    cout<<"Shared Count: "<<ShPtr1.use_count()<<endl; // Getting the number of owners of the memory location: ShPtr1. Becomes 2
    {
    shared_ptr<MyClass>ShPtr3 = ShPtr1;
    cout<<"Shared Count: "<<ShPtr1.use_count()<<endl; // Getting the number of owners of the memory location: ShPtr1. Becomes 2
    } // Automatially deallocating on pointer pointing to that location. One owner deleted after the scope ends
    cout<<"Shared Count: "<<ShPtr1.use_count()<<endl; // Getting the number of owners of the memory location: ShPtr1. Becomes 2


    weak_ptr<int> wePtr1; // Shared pointer keeps the ownership alive, weakpointer just acts as a observer
    {
        shared_ptr<int>ShPtr = make_shared<int>(20);
        wePtr1 = ShPtr;
        cout<<*ShPtr<<endl;

        // Attempt to use weak_ptr to access the value
        shared_ptr<int> tempPtr = wePtr1.lock(); // Try to lock the weak_ptr into a shared_ptr
        if (tempPtr) {
            cout << "Value pointed by weak_ptr: " << *tempPtr << endl;
        } else {
            cout << "The object pointed by weak_ptr has been destroyed." << endl;
        }
        
    } // weak and shared pointer will be deletd. Once shared poiner is deleted, weak poiter also gets deleted

} // Memory location gets destroyed after the end of this scope