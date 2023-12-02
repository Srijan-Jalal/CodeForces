#include <iostream>
using namespace std;
long long fact(long long x)
{
    long long k = 1;
    for(int i=2;i<=x;i++)
    {
        k = k * i;
    }
    return k;
}
int main(void)
{
    long long A,B;
    cin>>A>>B;
    if(A>B)
        cout<<fact(B)<<endl;
    else
        cout<<fact(A)<<endl;
    return 0;
}