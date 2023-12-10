#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a;
    string x;
    cin>>a;
    for(int i=1;i<=1000;i++)
        x+=to_string(i);
    cout<<x[a-1];
    return 0;
}