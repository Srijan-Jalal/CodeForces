#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>> t;
    string tmp;
    while(t--!=0)
    {
        cin>>tmp;
        int Bsum = 0, ACsum = 0;
        for(char ch : tmp)
        {
            if(ch == 'B')
                Bsum++;
            else
                ACsum++;
        }
        if(ACsum == Bsum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}