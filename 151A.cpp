#include <iostream>
using namespace std;

int main(void)
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k>> l >> c>> d >> p>> nl >> np;
    
    int drinks_l = (k * l) / nl;
    int drinks_c = c * d;
    int drinks_p = p / np;
    
    int min_drinks = min(min(drinks_l, drinks_c), drinks_p);
    cout << min_drinks / n << endl;
    return 0;
}
