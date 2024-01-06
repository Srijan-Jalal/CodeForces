#include <iostream>
using namespace std;
 
long long gcd(long long a, long long b) 
{
    while (b != 0) 
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
int main(void) 
{
    int t;
    cin >> t;
    while (t--!=0) 
    {
        long long n, k;
        cin >> n >> k;
        if (n % gcd(2, k) == 0) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}