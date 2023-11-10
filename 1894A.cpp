#include <iostream>
using namespace std;
int main(void)
{
    int t,n;
    string str;
    cin>>t;
    while(t--!=0)
    {
        cin>>n;
        cin>>str;
        cout<<str[n-1]<<endl;
    }
    return 0;
}