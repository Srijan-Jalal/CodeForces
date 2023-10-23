#include <iostream>
using namespace std;
int main(void)
{
    int k,n,w;
    cin>>k>>n>>w;
    int p = ((w*(w+1))/2)*k;
    if(p>n)
        cout<<p-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}