#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        string str;
        cin>>str;
        int F3 = int(str[0]) + int(str[1]) + int(str[2]);
        int L3 = int(str[3]) + int(str[4]) + int(str[5]);
        if(F3==L3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}