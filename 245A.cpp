#include <iostream>
using namespace std;
int main(void)
{
    int n, t, x, y, A = 0, a = 0, B = 0, b = 0;
    cin >> n;
    while (n--!=0)
    {
        cin >> t >> x >> y;
        if (t == 1)
        {
            A += x;
            a += y;
        }
        else
        {
            B += x;
            b += y;
        }
    }
    cout << (A >= a ? "LIVE" : "DEAD") << endl;
    cout << (B >= b ? "LIVE" : "DEAD") << endl;
    return 0;
}