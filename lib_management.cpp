#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int i, choice, count;

class library
{
    char book_name[20];
    char author[20];
    int pages;
    float price;
    char author_name[30], bk_nm[30];
    char key;

public:
    void add_book();
    void dis_book();
    void auth();
    void book_no();
} lib[100];

void library::add_book()
{
    cout << "Enter Book Name: ";
    cin >> lib[i].book_name;

    cout << "Enter Author Name: ";
    cin >> lib[i].author;

    cout << "Enter Pages: ";
    cin >> lib[i].pages;

    cout << "Enter Price: ";
    cin >> lib[i].price;
    count++;

    cout<<"\nPress any character key to continue...";
    cin>>key;
}

void library::auth()
{

    cout << "Enter author name : ";
    cin >> author_name;
    for (i = 0; i < count; i++)
    {
        if (strcmp(author_name, lib[i].author) == 0)
            cout<<i+1<<"\t"<< lib[i].author<< endl << "\t" << lib[i].book_name << "\t" << lib[i].pages<<"\t" << lib[i].price;
    }
    cout<<"\nPress any character key to continue...";
    cin>>key;
}

void library::dis_book()
{
    cout<<"\n====================================================="<<endl;
    cout << "All Books in Our E-Library Are:";

    for (i = 0; i < count; i++)
    {
        cout << "\nBook name:" << lib[i].book_name<<endl;
        cout << "\t Author:" << lib[i].author;
        cout << "\t Total Pages:" << lib[i].pages;
        cout << "\t Price:" << lib[i].price;
    }
    cout<<"\nPress any character key to continue...";
    cin>>key;
    cout<<"\n=====================================================";
}

void library ::book_no()
{
    cout << "\n No of Books our E-Library Are: " << count;
    cout<<"\nPress any character key to continue...";
    cin>>key;
}

int main()
{

    i = choice = count = 0;

    while (choice != 5)
    {
        // system("cls");
        cout << "\n\n********###### WELCOME TO E-LIBRARY #####********"<<endl;
        cout << "\n1. Add Book \n2. Display Books "<<endl;
        cout << "3. Display all books of given Author."<<endl;
        cout << "4. Display Count of Books in the E-Library."<<endl;
        cout << "5. Exit";

        cout << "\nChoose Option: "<<endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        lib[i].add_book();
        i++;
            break;
        case 2:
            lib->dis_book();
            break;
        case 3:
            lib->auth();
            break;
        case 4:
            lib->book_no();
            break;
        case 5:
            cout<<"\n\tThank you so much. \n\tExiting from the system!";
            exit(0);
            break;
        default:
            cout << "\n\t\tPlease choose correct option!";
        }
    }
    return 0;
}