#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
    int n,i=0;
    cin>>n;
    int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(arr[i]<=n)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES"<<endl;
            exit(0);
        }
        i++;
    }
    cout<<"NO"<<endl;
    return 0;
}