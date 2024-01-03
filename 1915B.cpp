#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	int n,j;
    cin>>n;
    string tmp;
	for(int i=0;i<n;i++)
	{
		for(int u=0;u<3;u++)
		{
			cin>>tmp;
			if(tmp.find("A")==-1)
                cout<<"A"<<endl;
			else if(tmp.find("B")==-1)
                cout<<"B"<<endl;
			else if(tmp.find("C")==-1)
                cout<<"C"<<endl;
		}
	}
    return 0;
}