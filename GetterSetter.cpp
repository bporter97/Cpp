#include<iostream>
using namespace std;

class Movie                                                                                                 // Class/Blue print: Movie
{
private:                                                                                                    // Code inside private can only be accessed by attributes/elements/functions that are inside the Movie class

    string rating;                                                                                           //Private Attribute

public:                                                                                                     // Any code outside of class Movie can access these attributes because of the "public" key word
    string title;
    string director;                                                                                        // Attributes of the Movie class
    Movie(string aTitle, string aDirector, string aRating)                                                  // Constructor for Movie class
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)                                                                          // Since rating is private and available only to members of the Movie class
    {                                                                                                       // we can no longer set the rating in the main function by calling "avengers.rating"
                                                                                                            // However we can still provide a value to the rating attribute by creating a setter like in this block of code
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R")                       // So values can still be passed through as parameters to the "avengers" object when it is initialized (as seen below) however
        {                                                                                                   // they are passed about through the use of a setter: Here we created a setter called "setRating" that takes a parameter called "aRating"
            rating = aRating; // if conditions are met, then the rating attribute is set to one of the      // that was initialized through the constructor. The setRating setter is called in the constructor and executes the code you see
        }                     // values above                                                               // checking to see if specific conditions are met. That way, it will only take the values: "G" "PG" etc and not something like "Death star"
        else
        {
            rating = "NR";    // if the above conditions aren't met, then it will assign the vale "NR" to rating instead
        }
    }

    string getRating()                                                                                      // Here a getter is created: since we can no longer call "avengers.rating" since the rating attribute is private
    {                                                                                                       // we create something called a getter, which returns the value of the private attribute "rating" to the public function "getRating"
        return rating;                                                                                      // From there, we can call the getRating function in main since it's public, and subsequently get the value of rating
    }
};                                                                                                          // Basically, getters and setters are functions that can be called to set the value of private attributes, and to get the value of private attributes
                                                                                                            // without having to call the attributes directly (because you can't since they are private) -
int main()
{

    Movie avengers("The Avengers", "Joss Whedon", "PG-13"); // Object of type Movie called: "The Avengers" instantiated

    cout << avengers.getRating()<< endl;

    avengers.setRating("R"); //setter is called
    cout << avengers.getRating(); //getter is called

    //you can see the value of the rating attribute before and after the setter is called.

    return 0;
}


