#include <iostream>
using namespace std;
int main(void)
{
    int n, p;
    cin >> n;
    int f[n+1];
    for (int i = 1; i <= n; ++i)
    {
        cin>>p;
        f[p]=i;
    }
    cout<<f[1];
    for (int i = 2; i <= n; ++i)
    {
        cout<<" "<<f[i];
    }
    cout<<endl;
    return 0;
}