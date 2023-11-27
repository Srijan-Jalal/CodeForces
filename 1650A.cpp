#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    string tmp;
    char ch;
    while(t--!=0)
    {
        bool flag = false;
        cin>>tmp>>ch;
        for(int i=0;i<tmp.size();i=i+2)
        {
            if(ch == tmp[i])
            {
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}