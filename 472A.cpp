#include <iostream>
#include <math.h>
using namespace std;
bool comp(int n)
{
	for (int i = 2 ; i <= (int)sqrt(n); ++i)
		if (n % i == 0) 
            return true;
	return false;
}
int main(void)
{
    long long n;
    cin>>n;
    bool flag = true;
    if(comp(n-4))
        cout<<4<<" "<<n-4<<endl;
    else
    {
        int k = 6;
        while(flag)
        {
            if(comp(k) && comp(n-k))
                flag = false;
            else
                k++;
        }
        cout<<k<<" "<<n-k<<endl;
    }
    return 0;
}