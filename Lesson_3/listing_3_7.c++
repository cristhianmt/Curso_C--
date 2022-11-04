/*
Listing 3.7 demonstrates how enumerated constants are used to hold the four cardinal
directions, with an initializing value supplied to the first one.
LISTING 3.7 Using Enumerated Values to Indicate Cardinal Wind Directions

*/

#include <iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West

};

int main()
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "Sout: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections WindDirection = South;
    cout << "Variable WindDirection = " << WindDirection << endl;

    return 0;
}