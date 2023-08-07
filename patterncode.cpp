#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
         cout<<" ";
        for(j=n-i+1;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<" ";
        for(j=n-i+1;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
         
        cout<<endl;
    }
    
return 0;
}


