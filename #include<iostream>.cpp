#include<iostream>
using namespace std;
int main()
{
    int r,c,i=1,n,j;
    cout << "Enter number you want to make pattern\n";
    cin >> n;
    r=1;
    
    while (r<=n) // outer loop to iterate through each row of the pattern
    {
        int k = n;
        while (k > r) { // inner loop to print spaces before the numbers in each row
            cout << " ";
            k--;
        }
        c=1;
        i=r;
        while (c<=r) // inner loop to print the increasing sequence of numbers in each row
        {
            cout<<i;
            j=r-1;
            i++;
            c++;
        }
        while(j>=1) // inner loop to print the decreasing sequence of numbers in each row
        {
            cout<<j;
            j--;
        }
        cout<<"\n";
        r++;
    }

return 0;
}
