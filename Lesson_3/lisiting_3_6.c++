/*
Declaring Variables as Constants Using const
The most important type of constants in C++ from a practical and programmatic point of
view are declared by using keyword const before the variable type. The generic declaration
looks like the following:
const type-name constant-name;
*/

#include <iostream>

int main()
{
    using namespace std;

    const double Pi = 22.0 / 7;
    cout << "The value of constant Pi is: " << Pi << endl;

    // Uncomment next line to fail compilation
    // Pi = 345:

    return 0;
}