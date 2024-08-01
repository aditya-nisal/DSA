// Return multiple values using pointers. Passing by reference

#include <iostream>
using namespace std;

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i=1; i<size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i=1; i<size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max) // Passing by reference
{
    for (int i=1; i<size; i++)
    {
        if (numbers[i] > *max) // Dereferencing the max variable address to access it and change it
        {
            *max = numbers[i]; // and change it
        }
        if (numbers[i] < *min) // Dereferencing the min variable address to access it and change it
        {
            *min = numbers[i]; // and change it
        }

    }

}

int main()
{
    int numbers [5] = {5, 4, -2, 29, 6};
    // cout<<"Min is: "<<getMin(numbers, 5)<<endl;
    // cout<<"Max is: "<<getMax(numbers, 5)<<endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max); // Passing by reference
    // The already existing min and max values will change in the function as we are passing them as pointers and by reference. If we would've pased by value
    // It would've copied it and created a new address for it. The orignal variable would be unchanged.
    cout<<"Min: "<<min<<endl; //Updated min value
    cout<<"Max: "<<max<<endl; //Updated max value
    return 0;
}