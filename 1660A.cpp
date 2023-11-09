#include <iostream>
using namespace std;
int main(void)
{
    int t;
	cin >> t;
	while(t--!=0) 
    {
		long long a,b;
		cin >>a>>b;
        if(a==0)
            cout<<1<<endl;
        else
            cout<<a+(2*b)+1<<endl;
	}
	return 0;
}