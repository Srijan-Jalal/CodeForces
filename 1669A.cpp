#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int rat;
        cin>> rat;
        if(rat>1899)
            cout<<"Division 1"<<endl;
        else if(rat>1599)
            cout<<"Division 2"<<endl;
        else if(rat>1399)
            cout<<"Division 3"<<endl;
        else
            cout<<"Division 4"<<endl;
    }
    return 0;
}