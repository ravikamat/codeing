#include<iostream>
//#include <limits>
#include<climits>
using namespace std;
int main()
{
    int n, i, no, l=INT_MIN; 
    cout<<"No input you want to enter\n";
    cin >> n;
    i=1;
    while(i<=n){
      cin >> no;
      cout<<"\n";
      if(no>l){
      l=no;
      
      }
      i++;
    }
    cout<<l<<"is largest";

return 0;
}