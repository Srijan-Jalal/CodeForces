#include<iostream>
using namespace std;
typedef long long ll;
int main(void)
{
    ll n;
    cin>>n;
    while(n--!=0)
    {
        ll k,x;
        cin>>k>>x;
        cout<<(k-1)*9+x<<endl;
    }
    return 0;
}