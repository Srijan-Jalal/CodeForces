#include <iostream>
using namespace std;
int main (void)
{
    int n,x=0;
    cin>>n;
    while(n!=0)
    {
        string str;
        cin>> str;
        if(str=="X--")
            x--;
        else if(str=="X++")
            x++;
        else if(str=="--X")
            --x;
        else
            ++x;
        n--;
    }
    cout<<x<<endl;
    return 0;
}