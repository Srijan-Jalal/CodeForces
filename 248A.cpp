#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n, l, r, left = 0, right = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>l>>r;
        left += l;
        right += r;
    }
    cout<<min(left, n - left) + min(right, n - right)<<endl;
    return 0;
}