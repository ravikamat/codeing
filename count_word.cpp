#include<iostream>
using namespace std;
int main()
{
    char ch;
    int cnt=0,cot=0;
    ch=cin.get();
    for(ch=cin.get();ch!='$';ch=cin.get())
    {
        if (ch==' ')
        {
            cnt++;
        }
        if (ch=='\n')
        {
            cot++;
            cnt++;
        }

    }
   
    cout<<"no of word is:"<<cnt+1<<"\n No of Line is : "<<cot+1;
return 0;
}
