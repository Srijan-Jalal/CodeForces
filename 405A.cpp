#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int temp,n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(int temp: vec)
        cout<<temp<<" ";
    return 0;
}