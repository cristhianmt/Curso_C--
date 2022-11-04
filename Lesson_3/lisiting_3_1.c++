/*
Declaring Variables to Access and Use Memory
The following examples will help you understand what variables are. Assume you are
writing a program to multiply two numbers supplied by the user. The user is asked to
feed the multiplicand and the multiplier into your program, one after the other, and you
need to store each of them so that you can use them later to multiply. Depending on what
you want to be doing with the result of the multiplication, you might even want to store
it for later use in your program. It would be slow and error-prone if you were to explicitly
specify memory addresses (such as 578) to store the numbers, as you would need to
worry about inadvertently overwriting existing data at the location or your data being
overwritten at a later stage.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

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

    return 0;
}