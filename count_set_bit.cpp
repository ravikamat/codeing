#include<iostream>
using namespace std;
int main()
{
    int i,no,cnt=0,rem;
    cin>>no;
    for(i=1;no>0;i++)
    {
        //rem=n%2;//method 1
        rem=no&1;// method 2 as bit wise if both are 1 then only out put is one else 0 so as we are shifting bit then always we will have 1 0 at end and we want o count set bit which is one so it add to count 
        cnt+=rem;
        //no/=2; // method 1
       no>>=1; // left shit method 2
        
    }
cout<<cnt;
    
return 0;
}

