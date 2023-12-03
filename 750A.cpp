#include<iostream>
using namespace std;
int main(void)
{
    int a,b,k=0;
	cin>>a>>b;
    while(b<=240)
    {
        k++;
        b += 5*k;
    }
    cout<<min(k-1,a);
}