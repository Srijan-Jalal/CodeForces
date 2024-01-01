#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int main(void)
{
	int T;
    cin>>T;
	while(T--!=0)
	{
		int a,b;
		cin>>a>>b;
		if(b%a==0) 
            cout<<1ll*b/a*b<<endl;
		else
            cout<<1ll*a/gcd(a,b)*b<<endl;
	}
    return 0;
}