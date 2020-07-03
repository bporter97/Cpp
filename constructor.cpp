#include <iostream>

using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
        Book(string name) // This is a constructor that takes a parameter called name
        {
            cout << name << endl; // This is a function that is executed when an object is created
            // Constructors are called when an object is created
        }
        Book(string aTitle, string aAuthor, int aPages) //Here we specify three parameters the constructor can take
        {
            title = aTitle; // Here we set the value of the parameters passed to the attributes of the class
            // kind of like how we can set num1 = 10 and set num2 = num1
            author = aAuthor;
            pages = aPages;
        }

        Book() //You can also set more than one constructor. Here we create a default constructor to assign
        { // default values to title author and pages. This takes place when no parameters are passed through
            title = "No Title";
            author = "No Author";
            pages = 0;

            // See below code for what cout looks like with default constructor
        }
};


int main()
{
    // Book book1("Harry Potter")); // Here we pass a parameter (Harry Potter) to the constructor. In turn, the constructor prints out
    // to the console the string we passed in

    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the rings", "Tolkein", 700);
    Book book3; // Object book3 initialized with default constructor

    cout << book3.title << endl;
    cout << book3.author << endl;   // since no parameters were passed in, book3's attributes are set to values that were defined
    cout << book3.pages << endl;    // in the default constructor
    return 0;
}

