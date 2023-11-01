#include <iostream>
using namespace std;
int main(void)
{
    int n,h,m,hr,min,c=1,cash=1;
    cin>>n>>hr>>min;
    while (--n)
    {
        cin>>h>>m;
        if (h == hr && m == min)
        {
            c += 1;
            if (c > cash)
            {
                cash = c;
            }
        }
        else
        {
            c = 1;
        }
        hr = h;
        min = m;
    }
    cout<<cash<<endl;
    return 0;
}