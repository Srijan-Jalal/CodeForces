#include <iostream>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--!=0)
    {
		int n,m;
		cin>>n>>m;
		string x,s;
		cin>>x>>s;
        int f=0;int p=6;int cnt=0;
		while(p--!=0)
        {
            if(x.find(s) != string::npos)
            {
                f=1;
                break;
            }
            cnt++;
            x+=x;
        }
        if(f==1)
            cout<<cnt<<endl;
        else 
            cout<<"-1"<<endl;
	}
	return 0;
}