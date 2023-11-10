#include <iostream>
using namespace std;
int main(void)
{
    int t,x,y,k;
    cin>>t;
    while(t--!=0)
    {
        cin>>x>>y>>k;
        if(y<x)
            cout<<x<<endl;
        else
            cout<<y+max(0,y-x-k)<<endl;

    }
    return 0;
}