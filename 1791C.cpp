#include <iostream>
using namespace std;
int main(void)
{
    int t,n;
    cin>>t;
    while(t--!=0)
    {
        string str;
        cin>>n>>str;
        bool flag = true;
        while(flag)
        {
            if((str[0] == '0' && str[n-1] == '1') || (str[0] == '1' && str[n-1] == '0'))
            {
                str.erase(str.begin());
                str.pop_back();
                n=n-2;
            }
            else
                flag = false;
        }
        cout<<n<<endl;
    }
    return 0;
}