#include<iostream>

using namespace std;

int main(){
for (int i=0; i<50; i++)
{
    cout<<i<<endl;
    if (i=20);
    {break;}
}

{
    cout<<i<<endl;
    if (i=20);
    {continue;}
}
/*only 20 will be skipped for continue statement. the step is jumped.*/
/*
cout<<i<<endl;
    if (i=20);
    break;
    is different from 
    if (i=20);
    break;
    cout<<i<<endl;
    in first cast 20 will not be included in because break is before cout. in 2nd case 20 will be included as cout is above. the code runs step by step.
*/
    return 0;
}