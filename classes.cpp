
#include <iostream>

using namespace std;

class Book // Essentially a "Blueprint for new data type" - Don't quote me.
{
    public: // Mapping out the blueprint for the book data type
        string title;
        string author; // all of these are attributes that make up a book
        int pages;
};


int main()
{
    Book book1; //This is where the "object" is created from the "blueprint"
    // we defined the data type (Book) and then created the object by giving it the name "book1" - called "instantiating an object"
    //Same concept as defining an integer variable like "int age;"

    book1.title = "Harry Potter"; // here we give the attributes of the book blue print values
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl; // you can then print out the attributes

    Book book2; // you can use the book class multiple times to instantiate different objects or "books"
    book2.title = "Game of Thrones";

    cout << book2.title << endl;

    return 0;
}
