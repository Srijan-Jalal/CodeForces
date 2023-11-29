#include <iostream>
using namespace std;
int main(void)
{
    int t;
    long long int a,b,ans,dis;
    cin>>t;
    while(t--!=0)
    {
        ans=dis=0;
        cin>>a>>b;
        if(a == b)
        {
            cout<<0<<"\n";
            continue;
        }
        else if(a>b)
        {
            dis=a - b;
            ans++;
            if(dis % 2 !=0)
            {
                ans++;
            }
        }
        else
        {
            dis= b - a;
            ans++;
            if(dis % 2 != 1)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}