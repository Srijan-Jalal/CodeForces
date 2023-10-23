#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    bool found = false;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            cnt += 1;
            if (cnt == 7)
            {
                found = true;
                break;
            }
        }
        else
        {
            cnt = 1;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
