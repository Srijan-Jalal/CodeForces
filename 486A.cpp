#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    long long n,o;
    cin>>n;
    o = n/2;
    if(n%2!=0)
        o++;
    cout<<(n-o)*(n-o+1) - (o*o)<<endl;
    return 0;
}