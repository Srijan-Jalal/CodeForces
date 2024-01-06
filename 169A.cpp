#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
    int n,a,b,temp;
    cin>>n>>a>>b;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    bool cond1 = b==1 && arr[0] < arr[1];
    bool cond2 = a==1 && arr[n-2] < arr[n-1];
    bool cond3 = arr[n-a-1]<arr[n-a] && arr[n-a]<=arr[n-a+1];
    if(cond1 || cond2 || cond3)
    {
        cout<<arr[n-a] - arr[n-a-1]<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}