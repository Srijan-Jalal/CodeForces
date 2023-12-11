#include<iostream>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--!=0)
	{
		int x,k;
		cin>>x>>k;
		for(int i=x;;i++)
		{
			int n=i,sum=0;
			while(n!=0)
			{
				sum+=n%10;
				n/=10;
			}
			if(sum%k==0)
			{
				cout<<i<<endl;
				break;
			}
		}
	} 
	return 0;
}