#include <iostream>
using namespace std;
int main(void)
{
    int t;
    long long a,b,c,d;
    cin>>t;
    while(t--!=0)
    {
        int ans=0;
        cin>>a>>b>>c>>d;
        if(a<b)
            ans++;
        if(a<c)
            ans++;
        if(a<d)
            ans++;
        cout<<ans<<endl;

    }
    return 0;
}