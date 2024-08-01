// Dynamic arrays. Dynamic memory

#include<iostream>
using namespace std;

int main()

{
    int size;
    cout<<"Size"<<endl;
    cin>>size;
    // int myArray[size]; 
    int * myArray = new int[size]; // Pointer points to new integer array of size: size. THe element of first element of the array on heap is storedon myArray
    // New: Allocate dynamic memory on heap
    int* A = new int(); 
    *A = 8;
    cout<<"A: "<<A<<endl;
    for (int i =0; i< size; i++)
    {
        cout<< "Array["<<i<<"] = ";
        cin>>myArray[i];
    }

    for(int j=0; j<size; j++)
    {
        cout<<myArray[j]<<endl;
        cout<<*(myArray+j)<<endl;
    }
    cout<<*A<<endl;
    delete[]myArray; // [] because that's how we allocated memory. Above we did I wnat new array, here we say I wnat to delete that array.
    delete A;
    cout<<A<<endl;
    myArray = NULL;
    cout<<myArray<<endl;
    return 0;
}