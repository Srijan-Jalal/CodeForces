#include<iostream>
using namespace std;
#define ll long long
int main(void)
{
    ll t,n,k,b[6],ans;
	cin>>t;
	while(t--!=0)
	{
		cin>>n>>k;ans=1;
		for(int i=1;i<=n;i++) 
        {
            cin>>b[i];
            ans*=b[i];
        }
        
		if(2023 % ans == 0)
		{
			cout<<"YES\n"<<2023/ans<<" ";
			for(int i=1;i<k;i++) 
                cout<<"1 ";
			cout<<"\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}