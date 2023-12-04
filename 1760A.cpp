#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && b>c) || (a<b && b<c))
            cout<<b<<endl;
        else if((b>a && a>c) || (b<a && a<c))
            cout<<a<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}