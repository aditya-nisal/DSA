#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


class Media
{
    public:
        virtual void Display() const = 0;
        
};

class Book: public Media{

    private:
        std::string title, author, ISBN;
        int total_copies, available_copies;

    public:
        Book(const std::string& tl, const std::string& auth, const std::string& isbn, int t_c, int a_c): title(tl), author(auth), ISBN(isbn), total_copies(t_c), available_copies(a_c){}

        void Display() const override
        {
            std::cout<<"Book Title: "<<title<<std::endl;
            std::cout<<"Book Author: "<<author<<std::endl;
            std::cout<<"Book ISBN: "<<ISBN<<std::endl;
            std::cout<<"Total Copies: "<<total_copies<<std::endl;
            std::cout<<"Available Copies: "<<available_copies<<std::endl;
        }

        void BorrowBook()
        {
            available_copies-=1;
            std::cout<<"Available copies: "<<available_copies<<std::endl;
        }

        void ReturnBook()
        {
            available_copies+=1;
            std::cout<<"Available copies: "<<available_copies<<std::endl;
        }

        std::string& GetIsbn()
        {
            return ISBN;
        }


};

class Library
{
    private:
        std::unordered_map<std::string, Book> books;
    public:
        void AddBook(Book book)
        {
            std::string isbn = book.GetIsbn();
            books.insert({isbn, book});
        }
        
        Book FIndBook(std::string isbn)
        {
            for (auto i: books)
            {
                if (books.count(isbn) > 0)
                {
                    return books.at(isbn);
                }
            }
        }

        void BorrowBook(std::string isbn)
        {
            books.at(isbn).BorrowBook();
        }

        void ReturnBook(std::string isbn, Book book)
        {
            books.insert({isbn, book});
        }

        void DisplayAllBooks() const
        {
            for (auto i: books)
            {
                i.second.Display();
            }
        }
};

int main()
{
    Book B("Hamlet", "William", "464635-354351-6343", 25, 20);
    // B.Display();
    // std::cout<<B.GetIsbn()<<std::endl;
    // B.BorrowBook();
    // B.Display();
    // B.ReturnBook();
    // B.Display();

    Book A("Power of sub", "Someone", "5453-4654651-45", 19, 18);
    A.Display();
    // A.BorrowBook();
    // A.ReturnBook();

    Library L;
    L.AddBook(B);
    L.AddBook(A);
    L.FIndBook("5453-4654651-45");
    L.BorrowBook("5453-4654651-45");
    L.FIndBook("5453-4654651-45");
    return 0;

}