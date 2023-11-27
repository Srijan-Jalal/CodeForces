#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    string tmp,str="codeforces";
    while(t--!=0)
    {
        int c=0;
        cin>>tmp;
        for(int i=0;i<10;i++)
            if(tmp[i]!=str[i])
                c++;
        cout<<c++<<endl;
    }
    return 0;
}