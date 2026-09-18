#include <iostream>
using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:

    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setDueDate(string d)
    {
        dueDate = d;
    }

    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getDueDate()
    {
        return dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem()
    {
    }
};

class Book : public LibraryItem
{
private:
    string isbn;

public:

    void createBook()
    {
        string title, author, date;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Due Date: ";
        cin >> date;

        cout << "Enter ISBN: ";
        cin >> isbn;

        setTitle(title);
        setAuthor(author);
        setDueDate(date);
    }

    void checkOut()
    {
        cout << "Book Checked Out Successfully.\n";
    }

    void returnItem()
    {
        cout << "Book Returned Successfully.\n";
    }

    void displayDetails()
    {
        cout << "\n--- Book Details ---";
        cout << "\nTitle: " << getTitle();
        cout << "\nAuthor: " << getAuthor();
        cout << "\nDue Date: " << getDueDate();
        cout << "\nISBN: " << isbn << endl;
    }
};

class DVD : public LibraryItem
{
private:
    int duration;

public:

    void createDVD()
    {
        string title, author, date;

        cout << "Enter DVD Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Due Date: ";
        cin >> date;

        cout << "Enter Duration (minutes): ";
        cin >> duration;

        setTitle(title);
        setAuthor(author);
        setDueDate(date);
    }

    void checkOut()
    {
        cout << "DVD Checked Out Successfully.\n";
    }

    void returnItem()
    {
        cout << "DVD Returned Successfully.\n";
    }

    void displayDetails()
    {
        cout << "\n--- DVD Details ---";
        cout << "\nTitle: " << getTitle();
        cout << "\nAuthor: " << getAuthor();
        cout << "\nDue Date: " << getDueDate();
        cout << "\nDuration: " << duration << " minutes\n";
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:

    void createMagazine()
    {
        string title, author, date;

        cout << "Enter Magazine Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Due Date: ";
        cin >> date;

        cout << "Enter Issue Number: ";
        cin >> issueNumber;

        setTitle(title);
        setAuthor(author);
        setDueDate(date);
    }

    void checkOut()
    {
        cout << "Magazine Checked Out Successfully.\n";
    }

    void returnItem()
    {
        cout << "Magazine Returned Successfully.\n";
    }

    void displayDetails()
    {
        cout << "\n--- Magazine Details ---";
        cout << "\nTitle: " << getTitle();
        cout << "\nAuthor: " << getAuthor();
        cout << "\nDue Date: " << getDueDate();
        cout << "\nIssue Number: " << issueNumber << endl;
    }
};


int main()
{
    LibraryItem *libraryItems[MAX_ITEMS];

    int count = 0;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Add DVD";
        cout << "\n3. Add Magazine";
        cout << "\n4. Display All Items";
        cout << "\n5. Search Item";
        cout << "\n6. Check Out Item";
        cout << "\n7. Return Item";
        cout << "\n8. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;


        // Add Book
        if (choice == 1)
        {
            if (count < MAX_ITEMS)
            {
                Book *b = new Book;

                b->createBook();

                libraryItems[count] = b;
                count++;

                cout << "Book Added Successfully.\n";
            }
            else
            {
                cout << "Library is Full.\n";
            }
        }


        // Add DVD
        else if (choice == 2)
        {
            if (count < MAX_ITEMS)
            {
                DVD *d = new DVD;

                d->createDVD();

                libraryItems[count] = d;
                count++;

                cout << "DVD Added Successfully.\n";
            }
            else
            {
                cout << "Library is Full.\n";
            }
        }


        // Add Magazine
        else if (choice == 3)
        {
            if (count < MAX_ITEMS)
            {
                Magazine *m = new Magazine;

                m->createMagazine();

                libraryItems[count] = m;
                count++;

                cout << "Magazine Added Successfully.\n";
            }
            else
            {
                cout << "Library is Full.\n";
            }
        }


        // Display All
        else if (choice == 4)
        {
            if (count == 0)
            {
                cout << "No Items Available.\n";
            }

            for (int i = 0; i < count; i++)
            {
                libraryItems[i]->displayDetails();
            }
        }


        // Search
        else if (choice == 5)
        {
            string searchTitle;

            cout << "Enter Title to Search: ";
            cin >> searchTitle;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (libraryItems[i]->getTitle() == searchTitle)
                {
                    libraryItems[i]->displayDetails();
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "Item Not Found.\n";
            }
        }


        // Check Out
        else if (choice == 6)
        {
            string title;

            cout << "Enter Title: ";
            cin >> title;

            for (int i = 0; i < count; i++)
            {
                if (libraryItems[i]->getTitle() == title)
                {
                    libraryItems[i]->checkOut();
                }
            }
        }


        // Return
        else if (choice == 7)
        {
            string title;

            cout << "Enter Title: ";
            cin >> title;

            for (int i = 0; i < count; i++)
            {
                if (libraryItems[i]->getTitle() == title)
                {
                    libraryItems[i]->returnItem();
                }
            }
        }


    } while (choice != 8);


    // Delete objects
    for (int i = 0; i < count; i++)
    {
        delete libraryItems[i];
    }

    cout << "\nThank You!\n";

    return 0;
}
