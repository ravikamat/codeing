#include<iostream>
using namespace std;
int main()
{
    int i,n,flag,j;
    cout << "enter no";
    cin>>n;
    for (i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if (flag==1)
        {
            cout<<i<<" ";
        }
    }
return 0;
}
