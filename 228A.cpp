#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    vector <long long> vec;
    long long temp;
    int c=0;
    for(int i=0;i<4;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<3;i++)
        if(vec[i]==vec[i+1])
            c++;
    cout<<c<<endl;
    return 0;
}