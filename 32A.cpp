#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n,d;
	cin>>n>>d;
    int a[n+1];
	for(int i=1;i<=n;i++)
    {
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int cnt=0;
	for(int i=1;i<=n;i++){
		int pos=i+1;
		while(pos<=n&&a[pos]-a[i]<=d){
			pos++;
			cnt++;
		}
	}
	cout<<cnt*2<<endl;
	return 0;
}