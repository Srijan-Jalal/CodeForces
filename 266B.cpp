#include <iostream>
using namespace std;
int main(void)
{
    int n,t;
    string s;
    cin >>n>>t>>s;
    while (t--!=0)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}