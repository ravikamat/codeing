// reading white space character
#include<iostream>
using namespace std;
int main()
{
     int cnt=0;
    char ch;
    ch=cin.get();
    while (ch!='\n')
    {
        cnt++;
        ch=cin.get();
    }
    cout<< cnt;
    

return 0;
}
