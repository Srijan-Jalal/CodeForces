#include <iostream>
using namespace std;
int main(void)
{
    int n,k,c=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<1)
            continue;
        else if(arr[i]>=arr[k-1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}