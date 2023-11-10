#include <iostream>
using namespace std;
int main(void)
{
    int t,n;
    cin>>t;
    while(t--!=0)
    {
        cin>>n;
        if(n<7 || n==9)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n%3==0)
                cout<<"1 4 "<<n-5<<endl;
            else
                cout<<"1 2 "<<n-3<<endl;
        }
    }
    return 0;
}