#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    string str1,str2,res;
    cin>>str1>>str2>>res;
    str1= str1 + str2;
    str2.clear();
    sort(str1.begin(),str1.end());
    sort(res.begin(),res.end());
    if(str1 == res)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;   
}