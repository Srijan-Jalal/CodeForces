#include <iostream>
using namespace std;
int main(void)
{
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    if(m*a>b)
    {
        int rem = (n%m)*a;
        if(rem>b)
            cout<<((n/m)+1)*b<<endl;
        else
            cout<<(n/m)*b + rem<<endl;
    }
    else
        cout<<n*a<<endl;
    return 0;
}
