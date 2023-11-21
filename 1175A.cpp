#include <iostream>
using namespace std;
int main(void)
{
    long long int t,n,k,c;
    cin>>t;
    while(t--!=0)
    {
        cin>>n>>k;
        c=0;
        while(n!=0)
        {
            if(n%k!=0)
            {
                c += n%k;
                n -= n%k;
            }
            else
            {
                n /= k;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}