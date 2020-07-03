
#include<iostream>
using namespace std;

class Student // Class/Blue print
{
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa) //Constructor
    {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }


    bool hasHonors() // Here we create a function to determine if a student has honor-roll
    {                // by creating a boolean value and testing if gpa is greater than or equal to 3.5
        if(gpa >= 3.5) // If it is, then we return a true value, if not, false.
        {
            return true;    // Functions that reside within a class are called methods and can be called by
        }                   // objects that are instantiated.
    }   return false;


};

int main()
{

    Student student1("Jim", "Business", 2.4); //Objects
    Student student2("Pam", "Art", 3.6);
    cout << student1.hasHonors(); // Calling the hasHonors method on object: student1

}

