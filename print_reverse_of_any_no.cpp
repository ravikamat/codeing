#include<iostream>
using namespace std;
int main()
{
    int i,no,d,revno;
    cin>> no;
    //just to reverse no 
       for (i=1;i<=sizeof(i);i++)
    {
        d=no%10;
        cout<<d;
        no/=10;
    } 
    //to reverse and store a number
    revno=0;
    for (i=1;i<=sizeof(no);i++)
    {
        d=no%10;
        no/=10;
        revno=revno*10+d;
    }
    cout<<revno;
return 0;
}

