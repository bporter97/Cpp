#include <iostream>
using namespace std;

//pointers show the position of memory that a variable is stored at.

int main()
{
    int age = 19; //pointers are found using "&" + <variable name>
    cout << &age endl;
    
    int *pAge = &age; // "*" is used to denote a variable used to store pointer info
    cout << pAge endl; // best practice to use camel case when defining a pointer info variable: start with a * and then a lowercase p followed by the
    // variable name with the first letter capitlized
    
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    
   
    cout << *pAge endl;//Use * to de-reference pointer and get the value of the variable
    cout << *&gpa endl;// using both "*" and "&" will re-reference the pointer

    return 0;
}

