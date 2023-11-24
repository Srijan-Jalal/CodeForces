#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    char ptr = 'a';
    int k = 0,temp;
    for(int i=0;i<str.size();i++)
    {
        temp = abs(str[i] - ptr);
        k = k + min(26 - temp,temp);
        ptr = str[i];
    }
    cout<<k<<endl;
    return 0;
}
