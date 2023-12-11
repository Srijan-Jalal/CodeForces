#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        long long n,ans=0,temp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ans++;
            cin>>temp;
            if(ans == temp)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}