#include <iostream>
#include <set>
using namespace std;
int main(void)
{
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a.insert(s[i]);
    }
    cout<<a.size()<<endl;
    return 0;
}