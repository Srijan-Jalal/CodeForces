#include <iostream>
using namespace std;

int main(void) 
{
    int t;
    cin >> t;

    while (t--!=0) 
    {
        char ch;
        int k;
        cin>>ch>>k;
        string str = "abcdefgh";
        for(int i=0;i<8;i++)
        {
            if(str[i]!=ch)
                cout<<str[i]<<k<<" ";
        }
        for(int i=1;i<=8;i++)
        {
            if(i != k)
                cout<<ch<<i<<" ";
        }
        cout << endl;
    }

    return 0;
}
