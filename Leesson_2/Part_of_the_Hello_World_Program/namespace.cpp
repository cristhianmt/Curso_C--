/*
Many programmers find it tedious to repeatedly add the std namespace specifier to
their code when using cout and other such features contained in the same. The using
namespace declaration as demonstrated will help you avoid this repetition.
*/

// Pre-processor
#include<iostream>

// Start of your program 
int main(){
    // Tell the compiler what namespace to search in 
    using namespace std;

    // Write to the screen using printf
    cout << "Hello World" << endl;

    // Return a value to the OS
    return 0;
}