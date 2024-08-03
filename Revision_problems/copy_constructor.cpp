
#include<iostream>
using namespace std;

class Book {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Book(string title, string author) { // Constructor
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}

    Book(const Book& orignal) // const- copy constructor is just to copy and not modify any param. Passing the reference to the Book obj orignal.
    {
        Title = orignal.Title;
        Author = orignal.Author;
        Rates = new float[RatesCounter]; // Creating a new Rates array because the destructor will clean them separately. If one deleted, the other one will give error.
        for (int i=0; i<RatesCounter; i++)
        {
            Rates[i] = orignal.Rates[i];
        }
    }

	~Book() { // Destructor
		delete[] Rates; // Deleting the rate pointer to avoid memory leaks
		Rates = nullptr;
	}
};

    void PrintBook(Book book)
    {
        cout<<book.Title<<endl;
        cout<<book.Author<<endl;

        float sum=0;
        for(int i=0; i<book.RatesCounter; i++)
        {
            sum+=book.Rates[i];
        }
        cout<<"Average Rate: "<<sum/book.RatesCounter<<endl;
    }

int main() {

	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");
    // Book book3(book1); // Copy constructor will work straight away here. Already available copy constructor
    Book book3 = book1; // Thi also invokes copy consructor If we are assigning very first value to book3
    // book3 = book2; // Here the copy constructor is not invoked but the assignment operator is called

    //1. Creating a new object based on a previous already existing object and copying it
    //2. When compiler is creating a temporary object. Passing by value
    PrintBook(book1);
    PrintBook(book2);
    PrintBook(book3);
    //3. Returning an object in a function strictly by value

	cin.get();
}