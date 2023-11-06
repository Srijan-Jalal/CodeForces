#include <iostream>
#include<algorithm>
using namespace std;

int main(void) 
{
 	int n;
	cin>>n;
	int arr[n];
	int MX=0;
	long long ans=0;
	for(int i=0;i<n;i++)
    {
		cin>>arr[i];
		MX=max(arr[i],MX);
	}
    for(int i=0;i<n;i++)
        ans+=MX-arr[i];	
	cout<<ans<<endl;
	return 0;
}