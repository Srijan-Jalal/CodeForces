#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a+b+c;
    ans = max(ans,a*b*c);
    ans = max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
	ans=max(ans,a+(b*c));
	ans=max(ans,(a*b)+c);
    cout<<ans<<endl;
    return 0;
}