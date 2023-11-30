#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int t,a,b,n;
    cin>>t;
    while(t--!=0)
    {
        int c = 0;
        cin>>a>>b>>n;
        while(a<=n && b<=n)
        {
            if(a>b)
                b += a;
            else
                a += b;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}