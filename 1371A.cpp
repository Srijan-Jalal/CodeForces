#include <iostream>
using namespace std;
int main(void)
{
    int t;
	cin >> t;
	while(t--!=0) 
    {
		long long n;
		cin >>n;
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n/2)+1<<endl;
	}
	return 0;
}