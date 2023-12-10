#include<bits/stdc++.h>
using namespace std;
int t,n,x,a[55],ans;
int main(void)
{
	cin>>t;
	while(t--!=0)
    {
		ans=0;
		cin>>n>>x;
		for(int i=1;i<=n;i++)
        {
			cin>>a[i];
			ans=max(ans,a[i]-a[i-1]);
		}
		ans=max(ans,2*(x-a[n]));
		cout<<ans<<endl;
	}
	return 0;
}