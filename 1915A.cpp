#include <iostream>
using namespace  std;
int main(void)
{
    int t,a,b,c;
    cin>>t;
    while(t--!=0)
    {
        cin>>a>>b>>c;
        if(a == b)
            cout<<c<<endl;
        else if(b == c)
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}