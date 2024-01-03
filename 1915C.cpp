#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--!=0)
    {
		long long n,m,sum= 0;
		cin>>n;
		for(int i = 0;i<n;i++)
        {
			cin>>m;
			sum += m;
		}
		long long s = sqrt(sum);
		if(s*s==sum)
            cout<<"Yes"<<endl;
		else 
            cout<<"No"<<endl;
	}
	
}