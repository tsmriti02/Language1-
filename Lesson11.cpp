#include<iostream>

using namespace std;

int main(){

    /****Pointers****/

    int a = 3;
    int*b = &a;
// & --> address of operators
    cout<< "The address of a is "<<&a<<endl;
    cout<< "The address of a is "<<b<<endl;
    // * --> dereference operator. value at operator 
    cout<< "The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    //Give address of pointer b which stores the adress of int a.
    cout<<"The address of b is "<<c<<endl;
    //Give address of pointer b which stores the adress of int a.
    cout<<"The value at address c is "<<*c<<endl;
    // give value of b which is address of a. after dereferencing it once.
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
// give the value of a. as the variable is dereferenced twice.
 
    return 0;
}