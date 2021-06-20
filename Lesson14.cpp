#include <iostream>

using namespace std;

/* 
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
If these function moves after main function the program won't function. For that we need to define a function prototype.
*/
/****Function Prototype****/
// type function-name(argument);
int sum(int a, int b); // --> Acceptable
//int sum(int,int); // --> Acceptable
//int sum(int a, b); // --> Not Acceptable
// after the prototype is defined the program will run.
void g( void ) // --> Acceptable 
//void g() // --> Acceptable 
int main()
{
    int no1, no2;
    cout << "Enter first number" << endl;
    cin >> no1;
    cout << "Enter second number" << endl;
    cin >> no2;
    cout << "The sum is " << sum(no1, no2);
    g();
    return 0;
}
// Formal and actual paramenters
// no1 and no2 are actual parameters
// a and b are formal parameters
// a and b will be taking values from actual parameters no1 and no2.

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g(){
    cout<<"\nHello";
}