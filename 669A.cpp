#include<iostream>
using namespace std;
int main(void)
{
	long long n,m;
	cin>>n;
    m=2*(n/3);
    if(n%3!=0)
        cout<<m+1<<endl;
    else
        cout<<m<<endl;
	return 0;
}