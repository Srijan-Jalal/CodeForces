#include <bits/stdc++.h>
using namespace std;
int main(void) 
{
	long long n, m;
	cin >> n >> m;
	long long a[m];
	for (long long &e : a) cin >> e;
	long long now = 1, ans = 0;
	for (long long i = 0; i < m; i++) 
    {
		if (now < a[i]) 
        {
			ans += a[i] - now;
			now = a[i];
		} 
        else if (now == a[i]) {} 
        else 
        {
			ans += n - now + a[i];
			now = a[i];
		}
	}
	cout << ans;
    return 0;
}