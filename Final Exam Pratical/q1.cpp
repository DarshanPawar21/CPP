#include <iostream>
#include<conio.h>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedYear;

    void displayBook()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl << endl;
    }
};

int main()
{
    Book b[2];
    b[0].title = "C++ Programming";
    b[0].author = "Akhil Sir";
    b[0].publishedYear = 2026;

    b[1].title = "Java Programming";
    b[1].author = "Darshan";
    b[1].publishedYear = 1990;
    for(int i = 0; i < 2; i++)
    {
        b[i].displayBook();
    }
    return 0;
}
