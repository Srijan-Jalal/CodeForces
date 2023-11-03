#include<iostream>
using namespace std;
int main(void)
{
    int n,CS,TS,c=0;
    cin>>n;
    while(n--!=0)
    {
        cin>>CS>>TS;
        if(TS-CS>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}