#include <iostream>

using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union employee
{
    /* data */
    int rice;
    char car;
    float pounds;
} ;

int main()
{
    enum Meal {breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1;
   /* cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl; */
    
 /*
 union money m1;
    m1.rice = 34;
m1.car = 'c'
    cout<<m1.rice;
    */

    /*
    struct employee happy;
    //or
    ep smriti;
    ep adarsh;
    ep apoorv;
    happy.eId = 1;
    happy.favChar = 's';
    happy.salary = 1600000000;
    cout << "The value is " << happy.eId << endl;
    cout << "The value is " << happy.favChar << endl;
    cout << "The value is " << happy.salary << endl;
    */

    return 0;
}