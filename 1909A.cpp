#include <iostream>
using namespace std;
int main(void) 
{
    int T;
    cin >> T;
    while (T--!=0) 
    {
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            if (x > 0) 
                x1++;
            if (x < 0) 
                x2++;
            if (y > 0) 
                y1++;
            if (y < 0) 
                y2++;
        }

        if (x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
