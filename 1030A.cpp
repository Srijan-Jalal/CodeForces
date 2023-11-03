#include <iostream>
using namespace std;
int main(void)
{
    int n,temp,flag=0;
    cin>>n;
    while(n--!=0)
    {
        cin>>temp;
        if(temp==1)
            flag++;
    }
    if(flag==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}