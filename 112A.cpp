#include <iostream>
using namespace std;
int main(void)
{
    string f,s;
    cin>>f>>s;
    for(int i=0;i<f.size();i++)
    {
        f[i]=tolower(f[i]);
        s[i]=tolower(s[i]);
    }
    cout<<f.compare(s);
    return 0;
}