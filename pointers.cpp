#include <iostream>
using namespace std;

int main()
{
    int age = 19; //pointers are found using & + variable name
    int *pAge = &age; //* is used to denote a variable used to store pointer info
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age endl;
    cout << pAge endl;
    cout << *pAge endl;//Use * to de-reference pointer and get the value of the variable
    cout << *&gpa endl;

    return 0;
}

