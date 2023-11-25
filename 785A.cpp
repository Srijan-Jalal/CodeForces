#include <iostream>
using namespace std;
int main(void)
{
    int t,c=0;
    cin>> t;
    string tmp;
    while(t--!=0)
    {
        cin>>tmp;
        if(tmp == "Tetrahedron")
            c += 4;
        else if(tmp == "Cube")
            c += 6;
        else if(tmp == "Octahedron")
            c += 8;
        else if(tmp == "Dodecahedron")
            c += 12;
        else
            c += 20;
    }
    cout<<c<<endl;
    return 0;
}