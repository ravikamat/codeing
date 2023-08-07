#include<iostream>
using namespace std;
int main()
{
    int i,a[]={5,4,3,2,1};
    int j;
    int n=sizeof(a)/sizeof(int);
    for (i=0;i<n;i++)
    {
        for (j=0;j<=n-2;j++)
        if (a[j]>a[j+1])
        {
            
            swap(a[j],a[j+1]);//using inbuilt function
            /*

            a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);//single line approch

            //using temp variable 
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            
            //without using thirt variable
            a[j]=a[j]+a[j+1];
            a[j+1]=a[j]-a[j+1];
            a[j]=a[j]-a[j+1];
            
            */
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}
