#include<iostream>

using namespace std;

int main(){
/****Array****/
int marks[5]= {20, 23, 24,93, 87};
/*or
int marks[]= {20, 23, 24,93, 87};
are same, */

int mathmarks[4];
mathmarks[0]=31;
mathmarks[1]=43;
mathmarks[2]=65;
mathmarks[3]=32;
 cout<< "These are maths marks" <<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;

cout<<"These are marks"<<endl;
// You can change the value of an array
marks[2]=84;
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;
//cout<<marks[4]<<endl;

/*print array using loops*/

for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks "<<i<< " is " <<marks[i]<<endl;
    /* code */
}

/****Pointers and Arrays****/
int* p = marks;
cout<<*(p++);
cout<<*(++p);
/*
cout<<"The value of marks[0] is "<< *p <<endl;
// cout<<"The value of *p is "<< *p <<endl;
cout<<"The value of marks[0] is "<< *(p+1) <<endl;
// cout<<"The value of *(p+1) is "<< *p <<endl;
cout<<"The value of marks[0] is "<< *(p+2) <<endl;
// cout<<"The value of *(p+2) is "<< *p <<endl;
cout<<"The value of marks[0] is "<< *(p+3) <<endl;
// cout<<"The value of *(p+3) is "<< *p <<endl;
cout<<"The value of marks[0] is "<< *(p+4) <<endl;
// cout<<"The value of *(p+4) is "<< *p <<endl;
*/
    return 0;

}