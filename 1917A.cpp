#include<iostream>
using namespace std;
int main(void)
{
	int t;
    cin>>t;
    while(t--!=0)
    {
        int nes,x,tq=0,fih=0;
	    cin>>nes;
	    for(int i=1;i<=nes;++i)
        {
		    scanf("%d",&x);
		    if(x<0)
                tq^=1;
		    if(x==0)
                fih=1;
	    }
	    if(fih||tq)
            cout<<"0"<<endl;
	    else 
            cout<<"1\n1 0\n"<<endl;
    }
	return 0;
}