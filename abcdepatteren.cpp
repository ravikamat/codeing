#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    char ca;
    cin>>n;
    ca='E';
    for(i=n;i>=0;i--)
    {
        ca='A';
        for(j=i;j>0;j--)
        {
            cout<<ca<<" ";
            ca++;
        }
        ca--;
        for(k=i;k>0;k--)
        {
            cout<<ca<<" ";
            ca--;
        }
        cout<<endl;
    }
    
return 0;
}

