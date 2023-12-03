#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,l,r;
	cin>>t;
	while(t--!=0)
    {
		cin>>l>>r;
		if(2*l>r) 
            cout<<"-1 -1\n";
		else 
            cout<<l<<" "<<2*l<<endl;
	}	
    return 0;
}