#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else if(a>b)
            cout<<b-(a%b)<<endl;
        else
            cout<<b-a<<endl;
        t--;
    }
    return 0;
}