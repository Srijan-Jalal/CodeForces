#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        string str;
        cin>>str;
        cout<<(str[0]-'0') + (str[2]-'0')<<endl;
    }
    return 0;
}