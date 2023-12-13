#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int n,t,k=0,s=0,x=2;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		t=n;
		k++;
		while(t>0)
		{
			s=s+t%i;
			t=t/i;
		}
	}
    x=__gcd(s,k);
	cout<<s/x<<"/"<<k/x;
    return 0;
}