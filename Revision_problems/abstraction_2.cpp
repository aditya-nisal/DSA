#include<iostream>
using namespace std;

class SmartPhone // Abstract class as atleast 1 pure virtual function in this. We cannot create an instance of the abstract class. But we can have a pointer to this class.
{
    public:
        virtual void TakeASelfie() = 0; 
        virtual void MakeACall() = 0; 
};

class Android :public SmartPhone
{
    public:
        void TakeASelfie() override
        {
            cout<<"Selfie Taken by Android"<<endl;
        }

        void MakeACall() override
        {
            cout<<"Android Calling"<<endl;
        }
};

class IPhone :public SmartPhone
{
    public:
        void TakeASelfie() override
        {
            cout<<"Selfie Taken by IPhone"<<endl;
        }

        void MakeACall() override
        {
            cout<<"IPhone Calling"<<endl;
        }
};

int main()
{   
    // Using pointer of the Type base class to the derived class
    SmartPhone* S1 = new Android();
    SmartPhone* S2 = new IPhone();
    S1->TakeASelfie();
    S1->MakeACall();
    S2->TakeASelfie();
    S2->MakeACall();

    Android A;
    IPhone I;
    A.TakeASelfie();
    A.MakeACall();
    I.TakeASelfie();    
    I.MakeACall();

    return 0;
}