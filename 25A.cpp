#include <iostream>
using namespace std;
int main(void)
{
    int n, x, even=0, LO=0, LE=0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            LE = i;
        }
        else
        {
            even -= 1;
            LO = i;
        }
    }
    cout << (even>0?LO:LE) << endl;
    return 0;
}