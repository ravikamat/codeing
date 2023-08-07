#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a=0, d=0,w=0,s=0;
    for(ch=cin.get();ch!='$';ch=cin.get())
    {
        if((ch>='a' and ch<='z')||(ch>='A' and ch<='Z'))
        {
            a++;
        }
        else if (ch>='0' and ch<='9')
        {
            d++;
        }
        else if ((ch==(' ')||ch==('\n'))||(ch=='\t'))
        {
            w++;
        }
        else
        {
        s++;
        }

        
    }
    cout<<"\nspecial:" <<s<<"\nchar:"<<a<<"\ndigit:"<<d<<"\nwhite spaces:" <<w  ;

return 0;
}
