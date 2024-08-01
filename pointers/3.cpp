#include <iostream>
using namespace std;

int main()
{
    int lucky_numbers [5] = {2, 3, 5, 7, 9};
    // cout<<lucky_numbers<<endl;
    // cout<<&lucky_numbers[0]<<endl;
    // cout<<lucky_numbers[2]<<endl;
    // cout<<*(lucky_numbers+2)<<endl;

    for(int i=0; i<=4; i++)
    {
        cout<<"Number"<<endl;
        cin>>lucky_numbers[i];
    }

    for(int i=0; i<=4; i++)
    {
        cout<< *(lucky_numbers+i)<<endl; // Incrementing the address by i space and then deferencing it
    }

    return 0;
}