#include <iostream>
using namespace std;
int main(void)
{
    long t; 
    cin>>t;
    while(t--!=0)
    {
        long n,mx = 0, mn = 1e9 + 7,x; 
        cin>>n;
        for(long p = 0; p < n; p++)
        { 
            cin>>x;
            mn = (mn < x) ? mn : x;
            mx = (mx > x) ? mx : x;
        }
        cout<<mx - mn<<endl;
    }
    return 0;
}