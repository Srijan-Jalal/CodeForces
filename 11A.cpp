#include <iostream>
using namespace std;
int main(void) 
{
    int n,d,a,b,c=0;
    cin>>n>>d>>a;
    
    while (--n!=0) 
    {
        cin>>b;
        if (b<=a) 
        {
            int x = (a - b) / d + 1;
            c += x;
            a = b + x * d;
        } 
        else 
            a = b;
    }
    cout << c << endl;
    return 0;
}
