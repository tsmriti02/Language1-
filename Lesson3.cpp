# include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}
// preference to local variable over global variable with same name. 
int main(){
    int glo = 9;
    glo = 78;
   // int a =4;
    //int b =5;
    int a=4, b=5;
    float pi=3.14;
    char c ='u'
    bool is_true = true;
    sum();
    cout<<glo<< is_true; 
    //true is 1 and false is 0
    //cout<<"This is 3rd lesson.\n The value of a is "<<a<<". \nThe value of b is "<<b ; 
    //cout<< "\nThe value of pi is: "<<pi;
    //cout<< "\nThe value of c is: "<<c ;
  //  \n is for line break
    return 0;

}