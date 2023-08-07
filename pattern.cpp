/*
       1
      232
     34543
    4567654   
*/

#include<iostream>
using namespace std;
int main()
{
    int r,c,i=1,n,j;
    cout << "Enter number you want to make patteren\n";
    cin >> n;
    r=1;
    
    while (r<=n)
    {
         c=1;
         i=r;
        while (c<=r)
        {
            
            cout<<i<<" ";
            j=r;
            
            i++;
            c++;
        }
        while(j>=r)
            {
                if(j>1)
                cout<<j<<" ";
                j--;
            }
        cout<<"\n";
        r++;
    }

return 0;
}

