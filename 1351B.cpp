#include <iostream>
using namespace std;
int main(void)
{
    int t,a,b,c,d;
    cin>>t;
    while(t--!=0)
    {
        cin>>a>>b>>c>>d;
        if(a+c==b && b==d || a+d==b && b==c || b+c==a && a==d || b+d==a && a==c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}