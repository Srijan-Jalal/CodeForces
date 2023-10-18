#include <iostream>
#include <math.h>
using namespace std;
int main (void)
{
    double n,m,a;
    cin>>n>>m>>a;
    long long b = (ceil(n/a))*(ceil(m/a));
    cout<<b<<endl;
    return 0;
}