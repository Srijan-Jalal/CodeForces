#include<iostream>
using namespace std;
int main()
{
    long  int a,b,c,d,i,ans;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    ans=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            ans+=a;
        else if(s[i]=='2')
            ans+=b;
        else if(s[i]=='3')
            ans+=c;
        else if(s[i]=='4')
            ans+=d;
    }
    cout<<ans<<endl;
    return 0;
}