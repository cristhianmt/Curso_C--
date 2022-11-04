/*
Determining the Size of a Variable Using
sizeof
Size is the amount of memory that the compiler reserves when the programmer declares
a variable to hold the data assigned to it. The size of a variable depends on its type, and
C++ has a very convenient operator called sizeof that tells you the size in bytes of a
variable or a type.

The usage of sizeof is quite simple. To determine the size of an integer, you invoke
sizeof with parameter int (the type) as demonstrated by Listing 3.4.
cout << “Size of an int: “ << sizeof (int);

*/

#include <iostream>

int main()
{
    using namespace std;
    cout << "Computing the size of some C++ inbuilt variable types" << endl;

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "Size of short int: " << sizeof(short) << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;

    cout << "The output changes with compiler, hardware and OS" << endl;
    return 0;
}