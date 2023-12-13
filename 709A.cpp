#include<iostream>
using namespace std;
int main(void)
{
    long long int i,j,k;
    long long int sum=0,c=0;
    long long int n,b,d;

    cin>>n>>b>>d;

    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]>b)
            continue;
        sum+=a[i];
        if(sum>d)
        {
            sum=0;
            c++;
        }
    }
    cout<<c;
    return 0;
}