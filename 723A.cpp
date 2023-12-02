#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) 
{
    vector <int> vec;
    int tmp;
    for(int i=0;i<3;i++)
    {
        cin>>tmp;
        vec.push_back(tmp);
    }    
    sort(vec.begin(),vec.end());
    cout<<vec[2] - vec[0]<<endl;
    return 0; 
}