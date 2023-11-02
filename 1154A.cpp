#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    vector<int> vec;
    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    cout<<vec[3]-vec[1]<<" "<<vec[3]-vec[2]<<" "<<vec[3]-vec[0]<<endl;
    return 0;
}