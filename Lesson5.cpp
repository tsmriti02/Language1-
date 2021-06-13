#include <iostream>
//there are two types of header files-
//1. System header files: it comes with the compile.
//2. User define header files: ti is written by the programmer.
// this file should be in current directory to avoid errors.
//ccp reference website for different header library files.
//depricate - verge of extinction
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "This is a practice program";
    Ccout << endl;
    cout << "Operators in C++:" << endl;
    cout << "Following are the Operators in C++" << endl;
    //Arithmetic operators
    cout << "The value of a+b is" << a + b << endl;
    cout << "The value of a-b is" << a - b << endl;
    cout << "The value of a*b is" << a * b << endl;
    cout << "The value of a/b is" << a / b << endl;
    cout << "The value of a%b is" << a % b << endl;
    cout << "The value of a++ is" << a++ << endl;
    cout << "The value of a-- is" << a-- << endl;
    cout << "The value of ++a is" << ++a << endl;
    cout << "The value of --a is" << --a << endl;
    cout << endl;
    // Assigment Operators - used to assign values to variables
    //int a=3, b=7;
    //char d = 'd';
    // Comparison operator - comparision between values
    cout << "The value of a == b is" << (a == b) << endl;
    cout << "The value of a != b is" << (a != b) << endl;
    cout << "The value of a >= b is" << (a >= b) << endl;
    cout << "The value of a <= b is" << (a <= b) << endl;
    cout << "The value of a > b is" << (a > b) << endl;
    cout << "The value of a < b is" << (a < b) << endl;
    cout << endl;
    // the result is in 0/1 (T/F) form.
    // Any operation in interger will have interger as a result.
    //Logical Operation
    cout << "The value of logic and operator (a==b) && (a<b) is:" << ((a == b) && (a < b)) << endl;
    cout << endl;
    cout << "The value of logic or operator (a==b) || (a<b) is:" << ((a == b) || (a < b)) << endl;
    cout << endl;
    cout << "The value of logic not operator !(a==b) is:" << (!(a == b)) << endl;

    // <<endl is also used for new line.
    return 0;
}