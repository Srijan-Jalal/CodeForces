#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int num=0;
    vector<int> h(n), a(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>h[i]>>a[i];
        for (int j = 0; j < i; ++j)
        {
            if (h[i] == a[j])
                num++;

            if (a[i] == h[j])
                num++;
            
        }
    }
    cout << num << endl;
    return 0;
}