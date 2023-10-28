#include<iostream>
#include <vector>
using namespace std;
int main(void)
{
    string str,res;
    cin>>str;
    int i=0;
    while(i<str.size())
    {
        if(str[i]=='.')
        {
            res.push_back('0');
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            res.push_back('2');
            i=i+2;
        }
        else
        {
            res.push_back('1');
            i=i+2;
        }
    }
    cout<<res<<endl;
    return 0;
}