/*
Global Variables
If the variables used in function MultiplyNumbers() in Listing 3.2 were declared
outside the scope of the function MultiplyNumber() instead of within it, then they
would be usable in both main() and MultiplyNumbers(). Listing 3.3 demonstrates
global variables, which are the variables with the widest scope in a program.
*/

#include <iostream>
using namespace std;

// three global integers
int FirstNumber = 0;
int SecondNumber = 0;
int MultiplicationResult = 0;

void MultiplyNumbers()
{
    cout << "Enter the first number: ";
    cin >> FirstNumber;

    cout << "Enter the second number: ";
    cin >> SecondNumber;

    // Multiply two numbers, store result in a variable
    MultiplicationResult = FirstNumber * SecondNumber;

    // Display
    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplicationResult << endl;
}

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    // Call the function that does all the work
    MultiplyNumbers();

    cout<< "Display from main():";

    // This line will now compile and work
    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplicationResult << endl;
}
