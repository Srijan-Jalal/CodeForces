#include <iostream>
using namespace std;
int main(void)
{
    int n, m, ans = 0;
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}