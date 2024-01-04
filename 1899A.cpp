#include <iostream>
using namespace std;
int main(void)
{
    int n,t;
    cin>>t;
    while(t--!=0)
    {
        cin>>n;
        if(n%3==2 || n%3==1)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}