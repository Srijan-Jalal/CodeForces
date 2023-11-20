#include<iostream>
using namespace std;
int main(void)
{
    int n,m,i=1;
    cin>>n>>m;
    bool flag = true;
    while(flag)
    {
        if(i>m)
            flag = false;
        else
            m=m-i;
        if(i==n)
            i=1;
        else
            i++;
    }
    cout<<m<<endl;
    return 0;
}