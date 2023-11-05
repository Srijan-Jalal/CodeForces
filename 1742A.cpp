#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || b+c==a || c+a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}