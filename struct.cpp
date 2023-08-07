#include<iostream>
using namespace std;

struct Book
{
    private:
    
    int bookId;
    char title[20];
    float price;

    public:
    void displayBook()
    {
        cout<<bookId<<" "<<title<<" "<<price<<"\n";
    }
    void inputBook()
    {
        cout<<"Enter BOOKID,TITLE,PRICE of the book\n";

        cin>>bookId;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;

    }
};

int main()
{
    Book b1,b2;

    b1.inputBook();
    b1.displayBook();
    

    return 0;
}