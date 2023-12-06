#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if(n == 0 || n == 1)
        return false;
    
    for(int i=2;i<=(int)sqrt(n);i++)
        if(n%i == 0)
            return false;

    return true;
}

int main(void)
{
    int n,m;
    cin>>n>>m;
    n++;
    bool flag = true;
    while(n<=m && flag)
    {
        if(isPrime(n))
            flag = false;
        else
            n++;
    }
    
    if(!flag)
        if(n == m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}