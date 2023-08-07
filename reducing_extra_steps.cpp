#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    char dir;
    dir=cin.get();
    int i,v=0,h=0;
    while(dir!='\n')  
    {
        if (dir=='N')
        {
            h++;
        }
        else if(dir=='S')
        {
            h--;
        }
        else if (dir=='E')
        {
            v++;
        }
        else if(dir=='W')
        {
            v--;
        }
        dir=cin.get();

    }
           
    cout<<v<<h;
    for(i=1;i<=h;i++) cout<<"N";
    for(i=-1;i>=h;i--) cout<<"S";
    for(i=1;i<=v;i++) cout<<"E";
    for(i=-1;i>=v;i--) cout<<"W";
return 0;
}
