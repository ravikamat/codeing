#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[]={6,8,6,3,2,-90,8756};
    int lar=INT_MIN, i;
    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
        if(a[i]>lar)
        lar=a[i];
    }
    cout<<"Largest number is :"<<lar;
return 0;
}
