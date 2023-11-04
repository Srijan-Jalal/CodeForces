#include <iostream>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    str[0] = toupper(str[0]);
    for(int i=1;i<str.size();i++)
        str[i] = tolower(str[i]);
    cout<<str<<endl; 
}