#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    if(n%5==0)
    {
        cout<<n/5<<endl;
    }
    else 
    {
        cout<<int(n/5) + 1<<endl;
    }
    return 0;
}