#include <iostream>
#include <cstring>
#define max 2
using namespace std;

class Book
{
    int no;
    char name[20];
    char author[20];
    char publisher[20];
    int copiesIssued;
    int copies;

public:
    Book();
    int bookNo()
    {
        return no;
    }
    void issueBook();
    void returnBook();
    void display();
};

Book::Book() // default constructor
{
    cout << "Enter book number: ";
    cin >> no;
    cout << "Enter book name: ";
    fflush(stdin);
    gets(name);
    cout << "Enter Author name: ";
    fflush(stdin);
    gets(author);
    cout << "Enter Publisher name: ";
    fflush(stdin);
    gets(publisher);
    cout << "Enter numbers of copies issued: ";
    cin >> copiesIssued;
    cout << "Enter number of copies: ";
    cin >> copies;
}

void Book::issueBook()
{
    if (copies - copiesIssued > 0)
    {
        cout << "Book Issued\n";
        copiesIssued++;
    }
    else
    {
        cout << "Book not available\n";
    }
}

void Book::returnBook()
{
    if (copiesIssued > 0)
    {
        copiesIssued--;
        cout << "Book returned\n";
    }
    else
    {
        cout << "No copies were issued\n";
    }
}

void Book::display()
{
    cout << "Number is: " << no << endl;
    cout << "Name is: " << name << endl;
    cout << "Author is: " << author << endl;
    cout << "Publisher is: " << publisher << endl;
    cout << "Number of copies issued are: " << copiesIssued << endl;
    cout << "Number of copies are: " << copies << endl;
}

int main()
{
    int bookNo;
    int x;
    int choice;
    Book *a[max]; // Dynamic
    for (int i = 0; i < max; i++)
    {
        cout << "Enter details for book " << i << endl;
        a[i] = new Book;
    }
    while (1)
    {
        cout << "1: Issue\n2: Return\n3: Display\n4: Exit\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a book number to issue: ";
            cin >> bookNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (a[i]->bookNo() == bookNo)
                {
                    x = 1;
                    a[i]->issueBook();
                }
            }
            if (x == 0)
            {
                cout << "Book not found\n";
            }
            break;
        case 2:
            cout << "Enter a book number to return: ";
            cin >> bookNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (a[i]->bookNo() == bookNo)
                {
                    x = 1;
                    a[i]->returnBook();
                }
            }
            if (x == 0)
            {
                cout << "Book not found\n";
            }
            break;
        case 3:
            cout << "Enter a book number to display details: ";
            cin >> bookNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (a[i]->bookNo() == bookNo)
                {
                    x = 1;
                    a[i]->display();
                }
            }

        case 4:
            return 0;
        default:
            break;
        }
    }

    return 0;
}
