#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[1])
        {
            cout<<a[i];
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}