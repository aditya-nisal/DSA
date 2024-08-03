#include <iostream>
using namespace std;

template<typename T>
class Calculator
{
    public:
    T Add(T a, T b)
    {
        return a+b;
    }        

    T Sub(T a, T b)
    {
        return a-b;
    }
    
    T Mul(T a, T b)
    {
        return a*b;
    }

    T Div(T a, T b)
    {
        return a/b;
    }

};

int addInt (int a, int b)
{
    return a+b;
}

float addFloat (float a, float b)
{
    return a+b;
}

template<typename T> // Declaring a template that has a new type name T
T Add(T a, T b)
{
    return a+b;
}

template<typename T> // Declaring a template that has a new type name T

T Sub(T a, T b)
{
    return a-b;
}


int main()
{
    cout<< addInt(2, 5)<<endl;
    cout<< addFloat(2.5, 5.3)<<endl;
    cout<< Add(2, 5)<<endl; // A generic function to replace a datatype
    cout<< Sub(2, 5)<<endl; // A generic function to replace a datatype

    Calculator<int> intCalculator;
    cout<<intCalculator.Add(5, 2)<< " " <<intCalculator.Sub(5, 2)<< " " <<intCalculator.Mul(5, 2)<< " " <<intCalculator.Div(5, 2)<<endl;

    Calculator<float> floatCalculator;
    cout<<floatCalculator.Add(5.8, 2.1)<< " " <<floatCalculator.Sub(5.8, 2.6)<< " " <<floatCalculator.Mul(5.8, 2.6)<< " " <<floatCalculator.Div(5.8, 2.6)<<endl;
    return 0;
}