#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        bool flag = true;
        string str,temp,temp2;
        cin>>str;
        int i=1,n=str.length(),a,b;
        while (i <= n / 2 && flag) 
        {
            if (str[i] != '0') 
            {
                temp = str.substr(0, i);
                a = stoi(temp);
                temp2 = str.substr(i, n - i);
                b = stoi(temp2);
                if (b > a)
                    flag = false;
            }
            i++;
        }
        if(flag)
            cout<<"-1"<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
    return 0;
}