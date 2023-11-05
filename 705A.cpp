#include <iostream>
using namespace std;

int main(void)
{
    string str1= "I hate that ";
    string str2 = "I love that ";
    string ans = ""; 
    bool flag = true;
    int n;
    cin>>n;
    if(n==1)
        ans += "I hate it";
    else
    {
        while(n--!=1)
        {
            if(flag)
                ans += str1;
            else    
                ans += str2;
            flag = !(flag);
        }
        if(flag)
            ans += "I hate it";
        else    
            ans += "I love it";

    }
    cout<<ans<<endl;
    return 0;
}