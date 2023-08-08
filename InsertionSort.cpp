#include<iostream>
using namespace std;
int main()
{
    int a[]={4,3,2,7,0};
    int n=sizeof(a)/sizeof(int);
    int i,j;
    /* Approch 1
for (int j = 1; j <= n - 1; ++j)
		{
			int handPickedCard = a[j];
			int pos = j - 1;
			while (pos >= 0 and handPickedCard < a[pos]) {
				a[pos + 1] = a[pos];
				pos--;
			}

			a[pos + 1] = handPickedCard;
		}

*/
    //Approch 2
    for (j=0;j<n;j++)
    {
        int hpc=a[j];
        int pos= j-1;
    while(pos>=0)
    {
        if(hpc<a[pos])
        {
            a[pos+1]=a[pos];
        }
        else{
            break;
        }
        pos--;
    }
    a[pos+1]=hpc;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}

