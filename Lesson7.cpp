#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //****Constants in C++****
    //int a = 34;
    //cout<<"The valu od a was: "<<a<<endl;
    //a = 45;
    //cout<<"The value of a is: "<<a<<endl;

    //****Constants in C++****
    //const int a = 3;
    //cout<<"The value of a was: "<<a<<endl;
    //a = 45;    error is be shown.
    //cout<<"The value of a is: "<<a<<endl;
    // const variable is a read only variable.

    //****Manipulator in C++****
//int a = 3, b=78, c=1233;
//cout<< "The value of a is: "<<a<<endl;
//cout<< "The value of b is: "<<b<<endl;
//cout<< "The value of c is: "<<c<<endl;

//cout<< "The value of a is: "<<setw(4)<<a<<endl;
//cout<< "The value of b is: "<<setw(4)<<b<<endl;
//cout<< "The value of c is: "<<setw(4)<<c<<endl;
//output will be right justified, take the space of 4 characters.

//****Operator Precedence****
int a =4, b=4;
// int c = a*5+b
int c = ((((a*5)+b)-84)+75);
// associativity left to right.
    return 0;
}