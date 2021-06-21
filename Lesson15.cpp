#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// this won't swap a and b.
void swap(int a, int b)       // temp  a  b
{
    int temp = a;             // 4     4   5
    a = b;                    // 4     5   5
    b = temp;                 // 4     5   4
}
void swapPointer(int* a, int* b)       // temp  a  b
{
    int temp = *a;             // 4     4   5
    *a = *b;                    // 4     5   5
    *b = temp;                 // 4     5   4
}
/****Call by Reference using Pointers****/
void swapPointer(int* a, int* b)       // temp  a  b
{
    int temp = *a;             // 4     4   5
    *a = *b;                    // 4     5   5
    *b = temp;                 // 4     5   4
}
/****Call by Reference using C++ reference variable****/
void /*int &*/ swapRefVar(int &a, int &b)       
{
    int temp = a;
    a = b;       
    b = temp;    
    return a;
}

int main()
{
    int x = 4, y = 5;
    //cout << "The sum of 4 and 5 is " << sum(a, b) << endl;
    cout<<"The valu of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x, y);
    // the value od x and y won't change as they are actual parameters and a and b are formal parameters. x and y are copied in a and b and a and b will swap not x and y. 
    //swapPointer(&x, &y); // using pointer reference swap a and b. 
    // this is directly refered to memmory hence values are swaped. this is called call by reference.
    swapRefVar(x, y)/*= 766*/; // using reference variables swap a and b. 
    // The value of x will be changed to 766 as the return is a and x is refering a for the value hence x value will be changed.
    cout<<"The valu of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}