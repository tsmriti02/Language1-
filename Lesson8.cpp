#include <iostrem>

using namespace std;

int main()
    //cout<< "Conditions in C++";
{
    int age;
    cout << "Write your age" << endl;
    cin >> age;
    //**** Selection structure**** If-else-if-else ladder****
    //
    //if ((age < 18) && (age > 0))
    //{
     //   cout << "Not Eligible to vote" << endl;
    //}
    //else if (age < 1)
    //{
    //    cout << "Learn to walk first" << endl;
    //}
    //else if (age == 18)
    //{
    //    cout << "Welcome, apply for voting card." << endl;
    //}
    //else
    //{
    //    cout << "Go on you can vote." << endl;
    //}
//****Selection Structure**** Switch case****
switch (age)
{
case 18:
cout<<"You are an adult now."<<endl;
        break;
case 17:
cout<<"You will be adult soon."<<endl;
        break;
case 60:
cout<<"You are young at heart."<<endl;
        break;
case 10:
cout<<"You have a long way to go."<<endl;
        break;

default:
cout<<"No special case"<<endl;
    break;
}
    return 0;
}