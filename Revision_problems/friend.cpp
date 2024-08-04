#include<iostream>
using namespace std;


class EquilateralTriangle
{
    private:
        float a, circumference, area;

    public:
        void setA(float length)
        {
            this->a = length;
            this->circumference = length*3;
            this->area = (1.73 *a*a)/4;
        }
        friend void printResults(EquilateralTriangle); // Can also pass by reference. EquilateralTriange& et
        friend class Homework;
};

class Homework
{
    public:
        void showResults(EquilateralTriangle e)
        {
            cout<<e.circumference<<endl;
            cout<<e.area<<endl;
        }
};

void printResults(EquilateralTriangle et) // Can also pass by reference. EquilateralTriange& et
{
    cout<<et.circumference<<endl;
    cout<<et.area<<endl;
}
// 1. Too many friends in programming will break teh whole idea behind encapsulation
// 2. Friendship is not mutual. One class is friend of second doesn't mean second is friend of first.
// 3. Friendship is not inherited. Derived class won't be afriend of the base class's friends
int main()
{
    EquilateralTriangle eq;
    eq.setA(3);
    printResults(eq); // Friend Function
    Homework h;
    h.showResults(eq); // Friend Class

    return 0;
}