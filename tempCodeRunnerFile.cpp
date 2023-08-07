#include<iostream>
using namespace std;
int main()
{
    char ch;
    int cnt==0;
    ch=cin.get();
    for(ch=cin.get();ch!='\n';ch=cin.get())
    {
        if (ch=='\n')
        {
            cnt++;
        }

    }
    cout<<"no of word is:"<<cnt+1;
return 0;
}
