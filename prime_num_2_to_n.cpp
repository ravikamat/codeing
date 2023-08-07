#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the number which you want to find prime number or not\n";
    cin >> n;
    if (n==2 || n==1)
    {
        cout << n<<" is prime number";
        return 0;
    }
    int i=2;
    while(i<n)
    {
        if (n%i==0)
        {
            cout << n << " is not prime number";
            return 0;
        }
        i++;
    }
    cout <<n<<" is prime number";
return 0;
}
