#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int n = min(k2, min(k5, k6));
	int m = min(k3, k2 - n);
	cout << 32 * m + 256 * n << endl;
	return 0;
}