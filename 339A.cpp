#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    vector<int> vec;
    for(int i=0;i<str.size();i=i+2)
        vec.push_back(stoi(to_string(str[i])));
    sort(vec.begin(),vec.end());
    str.clear();
    for(int num:vec)
    {
        str.push_back(num);
        str.push_back('+');
    }
    str.pop_back();
    cout<<str;
    return 0;
}