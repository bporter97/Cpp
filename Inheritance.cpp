
#include<iostream>
using namespace std;

class Chef //Chef Class
{
public:
    void makeChicken() // Different functions that can be called when an object is instantiated of type "Chef"
    {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

class ItalianChef : public Chef                                         // Inheritance is the act of making a class that can inherit the attributes, functions/methods of another class, hence the name "Inheritance"
{                                                                       // To use inheritance, create a new class followed by a ":" and then the access modifier of the attributes/functions you wish to inherit
public:                                                                 // from another class, followed by the name of the class you wish to inherit from.
    void makePasta()                                                    // You can then create new methods an attributes for your new class
    {
        cout << "The chef makes pasta"
    }

    void makeSpecialDish()                                              // You can also take the functions/methods from the parent class and override those in the child class
    {
        cout << "The chef makes chicken parmesan" << endl;              // Here makeSpecialDish was inherited already from the Chef class, however we can add new features to it
    }
};

int main()
{
    Chef chef;
    cout << chef.makeChicken() << endl;

    ItalianChef italianChef;
    cout << italianChef.makeChicken << endl;        //example of inheritance at work

    cout << chef.makeSalad << endl;

    cout << italianChef.makeChicken << endl;

    cout << italianChef.makePasta() << endl;        // New function made from the ItalianChef child class.

    cout << chef.makeSpecialDish() << endl;
                                                    // notice the difference between the two "makeSpecialDish"'s
    cout << italianChef.makeSpecialDish << endl;

    return 0;
}
