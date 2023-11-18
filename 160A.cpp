#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    long long n,m,i,j,sum=0,cnt=0,ans=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        ans+=a[i];
        cnt++;
        if(ans>sum)
            break;
    }
    cout<<cnt<<endl;
    return 0;
}