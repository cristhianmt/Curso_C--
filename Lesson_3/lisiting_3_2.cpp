/*
Understanding the Scope of a Variable
Ordinary variables have a well-defined scope within which they’re valid and can be used.
When used outside their scope, the variable names will not be recognized by the compiler
and your program won’t compile. Beyond its scope, the variable is an unidentified
entity that the compiler knows nothing of.
To better understand the scope of a variable, reorganize the program in Listing 3.1 into a
function MultiplyNumbers() that multiplies the two numbers and returns the result. See
Listing 3.2.
*/

#include <iostream>

using namespace std;

void MultiplyNumbers()
{
    cout << "Enter the first number: ";
    int FirstNumber = 0;
    cin >> FirstNumber;

    cout << "Enter the second number: ";
    int SecondNumber = 0;
    cin >> SecondNumber;

    // Multiply two numbers, store result in a variable
    int MultiplicationResult = FirstNumber * SecondNumber;

    // Display
    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplicationResult << endl;
}

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    // Call the function that does all the work

    MultiplyNumbers();
    // cout << FirstNumber << " x " << SecondNumber;
    // cout << " = " << MultiplicationResult << endl;

}

