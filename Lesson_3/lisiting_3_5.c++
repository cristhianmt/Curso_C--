/*
LISTING 3.5 Using auto Keyword and Relying on the Compiler’s Type-inference
Capabilities
*/

#include <iostream>
using namespace std;

int main()
{
    auto Flag = true;
    auto Number = 2500000000000;

    cout << "Flag = " << Flag;
    cout << " , sizeof(Flag) = " << sizeof(Flag) << endl;
    cout << "Number = " << Number;
    cout << " , sizeof(Number) = " << sizeof(Number) << endl;

    return 0;
}