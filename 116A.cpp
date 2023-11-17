#include <iostream>
using namespace std;
int main(void)
{
    int n,a,b,c=0,m=0;
    cin>>n;
    while (n--!=0)
    {
        cin>>a>>b;
        c-=a;
        c+=b;
        if (c>m)
            m=c;
    }
    cout<<m<<endl;
    return 0;
}