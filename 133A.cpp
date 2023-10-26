#include <iostream>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    for(char c : str)
    {
        if(c=='H' || c=='Q' || c=='9')
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
    cout<<"NO"<<endl;
}