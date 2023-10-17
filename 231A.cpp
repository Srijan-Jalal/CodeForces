#include <iostream>
using namespace std;
int main(void)
{
    int n,c=0;
    cin>>n;
    while(n!=0)
    {
        int a,b,d;
        cin>>a>>b>>d;
        if((a==1 && b==1) || (b==1 && d==1) || (a==1 && d==1))
            c++;
        n--;
    }
    cout<<c<<endl;
}