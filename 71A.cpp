#include<iostream>
#include <string>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    string str;
    while(n!=0)
    {
        cin>>str;
        if(str.size()<11)
            cout<<str<<endl;
        else
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
        n--;
    }
}