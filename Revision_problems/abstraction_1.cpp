#include <iostream>
using namespace std;

class Instrument // Abstract class as it has atleast one pure virtual function
{
    public:
        virtual void MakeSound()
        {
            cout<<"Instrument is playing"<<endl;
        }

        virtual void PlayInstrument() = 0;
};

class Accordian:public Instrument
{
    public:
        void MakeSound()
        {
            cout<<"Accordian is playing"<<endl;
        }

        void PlayInstrument() override
        {
            cout<<"It's Accordian"<<endl;
        }
};

class Piano:public Instrument
{
    public:
        void MakeSound()
        {
            cout<<"Piano is playing"<<endl;
        }

        void PlayInstrument() override
        {
            cout<<"It's Piano"<<endl;
        }
};

int main()
{
    // Instrument I; // We cannot create the instance of a abstract class
    Accordian A;
    A.MakeSound(); // Virtual function
    A.PlayInstrument(); // Pure virtual function

    // Using pointer
    Instrument* acc = &A;
    acc->MakeSound();
    acc->PlayInstrument();

    //Using dynamic memory in pointer
    Instrument* acc_ = new Accordian();
    acc_->MakeSound();
    acc_->PlayInstrument();

    Instrument * pia = new Piano();

    Instrument* Instruments[2] = {acc_, pia};
    for (int i=0; i<2; i++)
    {
        Instruments[i]->MakeSound();
        Instruments[i]->PlayInstrument();
    }

    return 0;
}