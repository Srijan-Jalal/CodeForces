#include <iostream>
using namespace std;
int main(void)
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<1<<endl;
    }
    else
    {
        int c=0;
        while(a<=b)
        {
            a=3*a;
            b=2*b;
            c++;
        }
        cout<<c<<endl;
    }
}