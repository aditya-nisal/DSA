#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin>>rows>>cols;

    int** table = new int*[rows]; // A pointer to a pointer since it will be pointing to the location of an array and the location of each array in that array
    // So we created an integer array of poiners


    for (int i =0; i<rows; i++) // Creating a separate dynaic array for each element of the initial dynamic array
    {
        table[i] = new int[cols];
    }

    table[1][2]= 88; // Accessing the element in the dynamic multi dim array

    for (int i =0; i<rows; i++) // Deallocating the rows pointers array allocated dynamic memory
    {
        delete[] table[i]; // Deleting array that table[i] is pointing to
    }
    delete[] table; // Deallocating the array table variable is pointing to
    table = NULL; // Null value of the address of the table 
    
    return 0;
}