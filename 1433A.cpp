#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int fn,sum=0;
        cin>>fn;
        if(fn==1)
            sum++;
        else if(fn==9999)
            sum+=90;
        else
        {
            sum += ((fn%10)-1)*10;
            if(fn>999)
                sum+=10;
            else if(fn>99)
                sum+=6;
            else if(fn>9)
                sum+=3;
            else    
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}