#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>> t;
    char tmp;
    while(t--!=0)
    {
        cin>>tmp;
        if(tmp == 'c' || tmp == 'o' || tmp == 'd' || tmp == 'e'|| tmp == 'f' 
        || tmp == 'o' || tmp == 'r' || tmp == 'c' || tmp == 'e' || tmp == 's')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}