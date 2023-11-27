#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    string tmp,str="314159265358979323846264338327";
    while(t--!=0)
    {
        int c=0;
        cin>>tmp;
        for(int i=0;i<tmp.size();i++)
            if(tmp[i]==str[i])
                c++;
            else
                break;
        cout<<c++<<endl;
    }
    return 0;
}