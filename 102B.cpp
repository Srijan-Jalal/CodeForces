#include <iostream>
using namespace std;
long long SOD(long long n) 
{
    long long sum = 0,r;
    while (n > 0) 
    {
        r = n % 10;  
        sum += r;      
        n /= 10;             
    }
    return sum;
}
int main(void)
{

    long long i,ans,cnt=1,sum=0;
    string s,s1;
    cin>>s;
    if(s.size()!=1)
    {
        for(i=0; i<s.size(); i++)
        {
            sum+=(s[i]-'0');
        }

        while(sum>=10)
        {
            ans=sum;
            sum=SOD(ans);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}