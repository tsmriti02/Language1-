#include <iostream>

using namespace std;

int c = 45;

int main()
{
    //****Built in date types****
    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum is " << c << endl;
    cout << "The global c is" << ::c;

    //****Float doubles and long double literals****
    float d = 34.4f;
    long double e = 34.4l;
    cout << "The value of d is " << d << endl
         << "The value of e is " << e << endl;
    // the space between is and " in the code, decides the space between is and _value in the output.
    //34.4 is by default a double but if we need it to be float f is added to the value like 34.4f. 34.4l is for long double.
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    //****Reference Variables****
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y;
    // when same variable has different name reference variable is used.

    //****Typecasting****
    //change of one variable to another
    //conversion of one data type into another.
    int a = 45;
    float b = 55.46;
    cout << "The value of a is " << (a) << endl;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of b is " << (b) << endl;
    cout << "The value of b is " << (int)b << endl;
    int c = int(b);
    cout << "The value of c is " << (c) << endl;
    cout << "The expression is " << (a + b) << endl;
    cout << "The expression is " << (a + int(b)) << endl;
    cout << "The expression is " << (a + (int)b) << endl;

    return 0;
}