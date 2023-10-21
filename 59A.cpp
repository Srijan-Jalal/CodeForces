#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    int CCL=0,LCL=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>=65 && str[i]<=90)
            CCL++;
        else
            LCL++;
    }
    if(LCL>=CCL)
    {
        for(char &c: str)
        {
            c = tolower(c);
        }
        cout<<str<<endl;
    }
    else
    {
        for(char &c: str)
        {
            c = toupper(c);
        }
        cout<<str<<endl;
    }
    return 0;
}