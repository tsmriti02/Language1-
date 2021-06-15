#include <iostream>

using namespace std;

int main()
{
    /*Loops in C++
    1. For loop
    2. While loop
    3. Do- while loop*/

    /****For Loops in C++****/
    /*int i=1;
    cout<<i<<endl;
    i++;*/
    // Syntax for loop
    // for(initialization; condition; updation)
    //{
    // loop body(C++ code);
    //}
    //for (int i = 0; i <=40; i++)
    //{
    //code
    //cout << i << endl;
    // i++; don't write as this will add step to program.
    //}
    // Example of infinite loop
    //for (int i = 1; 34 < 40; i++)
    // {
    /* code */
    //   cout<<i<<endl;
    //}
    //infinite loop is avoided as it requires memory and it run so fast that it is difficult to control.

    /****While Loops in C++****/
    // Syntax:
    // while(condition)
    //{
    //C++ statements;
    //}
    // Printing 1 to 40 using while loop
    //int i = 1;
    //while (i<=40)
    //{
    //    cout<<i<<endl;
    //    i++;
    /* code */
    //}
    // infinite while loop
    //int i=1;
    //while (true)
    //{
    //   cout<<i<<endl;
    //   i++;
    /* code */
    // }

    /****do-while loop in C++****/
    // Syntax:
    // do
    // {
    // C++ Statement;
    //} while (condition);
    //int i = 1;
   
    //do {
        //cout << i << endl;
      //  i++;
        /* code */
    //} while (i <= 40);
    // in do - while loop the condition is run alteast one time even if the condition is false.
/****Assignment****/
int a=6, i = 1;
	for(i=1;i<=10;i++)
	{
		cout<<a*i<<endl;
	}
    return 0;
}