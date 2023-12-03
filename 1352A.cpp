#include <iostream>
using namespace std;
int main(void) 
{
	int t;
	cin>>t;
	while(t--!=0) 
	{
		int n,arr[6],k=0,p=1,i;
		cin>>n;
		for(;n>0;p*=10,n/=10)
			if((arr[k]=(n%10)*p)>0)
                k++;
		cout<<k<<endl;
		for(i=0;i<k;i++)
			cout<<arr[i]<<" ";
	}
}