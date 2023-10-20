#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    if(!(str[0]>=65 && str[0]<=91))
    {
        str[0]-=32;
    }
    cout<<str<<endl;
}