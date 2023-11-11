#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        string str;
        cin>>str;
        for(char &c: str)
            c = toupper(c);
        if(str=="YES")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}