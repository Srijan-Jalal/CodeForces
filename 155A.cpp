#include <iostream>
using namespace std;
int main()
{
    int n, rat;
    cin>>n>>rat;
    int min=rat, max=rat, ans=0;
    if(n==1)
        ans=0;
    else
    {
        while (--n!=0)
        {
            cin>>rat;
            if (rat<min)
            {
                min=rat;
                ans++;
            }
            if (rat>max)
            {
                max = rat;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}