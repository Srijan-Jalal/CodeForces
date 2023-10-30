#include <iostream>
using namespace std;
int main(void)
{
    int n,i=0,sum=0,temp ;
    cin>>n;
    while(i!=n)
    {
        cin>>temp;
        sum+=temp;
        i++;
    }
    cout<<(float)sum/n<<endl;
}