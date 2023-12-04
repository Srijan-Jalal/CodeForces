#include <iostream>
using namespace std;
int main(void)
{
    int n, ans = 0, i = 1, k = 1;
    cin>>n;
    while(k <= n)
    {
        k = ((i*i) + i) / 2;
        if(k > n) 
            break;
        n = n - k;
        ans++;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}