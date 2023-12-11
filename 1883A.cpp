#include <iostream>
using namespace std;
int main(void)
{
	int q;
    cin>>q;
	while(q--)
    {
        string s;
        cin>>s;
        char v='1';
        int cnt=0;
        for(char c:s){

            if(c=='0')
                c='9'+1;
            cnt+=abs(c-v)+1;
            v=c;
        }
        cout<<cnt<<'\n';
    }    
	return 0;
}