#include<iostream>
using namespace std;
int main(void)
{
    int AC=0,DC=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if(ch=='A')
            AC++;
        else
            DC++;
    }
    if(AC>DC)
        cout<<"Anton"<<endl;
    else if(DC>AC)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}