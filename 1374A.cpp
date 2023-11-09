#include <iostream>
using namespace std;
int main(void)
{
    int t;
	cin >> t;
	while(t--!=0) 
    {
		int x,y,n,temp;
		cin >>x>>y>>n;
        temp=n-(n%x)+y;
		if (temp<=n) 
			cout <<temp<<endl;
        else 
			cout << n-(n%x)-(x - y) << endl;
	}
	return 0;
}