#include <iostream>
typedef long long ll;
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        ll a,b,c;
        cin>>a>>b;
        if(a==b)
            c=0;
        else 
        {
            int temp = abs(a-b);
            if(temp%10==0)
                c = temp/10;
            else
                c = (temp/10) + 1;
        }
        cout<<c<<endl;
    }
    return 0;
}