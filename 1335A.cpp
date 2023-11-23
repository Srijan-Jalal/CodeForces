#include <iostream>
using namespace std;
int main(void)
{
    long long n,t;
    cin>>t;
    while(t--!=0)
    {
        cin>>n;
        if(n%2==0)
            cout<<(n/2) - 1<<endl;
        else
            cout<<n/2<<endl;
    }
    return 0;
}