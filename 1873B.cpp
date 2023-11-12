#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int t,n,temp;
    cin>>t;
    while(t--!=0)
    {
        long long sum=1;
        cin>>n;
        vector <int> vec;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end());
        vec[0]++;
        for(int i=0;i<n;i++)
            sum = sum*vec[i];
        cout<<sum<<endl;
    }
    return 0;
}