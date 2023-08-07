#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        /*
        if(i%2==0)
        {
        x=0;
        }
        else
        {
            x=1;
        }
        */ // above whole can be be written as below statement
        x=i%2;

        for(j=0;j<=i;x=1-x,j++)
        {
            //x=1-x; this statement can be written in loop also as above
            cout<<x<<" ";
        }
        cout<<endl;
    }
      
return 0;
}

