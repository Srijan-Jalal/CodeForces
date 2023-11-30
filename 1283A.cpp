#include <iostream>
using namespace std;
int main(void)
{
    int t,h,m;
    cin>>t;
    while(t--!=0)
    {
        cin>>h>>m;
        m = 60 - m;
        h = 24 - (h + 1);
        m += h*60;
        cout<<m<<endl;
    }
    return 0;
}