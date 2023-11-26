#include <iostream>
using namespace std;
int main(void)
{
    int n,a,b,z=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            z++;
        else if(b>a)
            z--;
        else
            z+=0;
    }
    if(z>0)
        cout<<"Mishka"<<endl;
    else if(z<0)
        cout<<"Chris"<<endl;
    else 
        cout<<"Friendship is magic!^^" <<endl;
    
    return 0;
}