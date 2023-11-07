#include <iostream>
using namespace std;
int main(void)
{
    string s;
    char ch;
    bool Flag= true;
    cin >> s;
    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            Flag=false;
            break;
        }
    }
    if(Flag)
    {
        for(int j=0;j<s.size();j++)
        {
            if(islower(s[j]))
                ch=toupper(s[j]);
            else
                ch=tolower(s[j]);
            cout<<ch;
        }
    }
    else
        cout << s;
    return 0;
}