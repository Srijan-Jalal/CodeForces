#include <iostream>
#include <string>
using namespace std;
int main(void)
{   
    int t,n;
    cin>>t;
    while(t--!=0)
    {
        string temp;
        cin>>temp;
        n = temp.size();
        if(n%2==0)
        {
            if(temp.substr(0,n/2) == temp.substr(n/2,n/2))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}