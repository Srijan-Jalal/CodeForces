#include <iostream>
using namespace std;
bool BY(int n)
{
    string str = to_string(n);
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(str[i]==str[j])
                return false;
    return true;

}
int main(void)
{
    int n;
    cin>>n;
    bool flag=true;
    if(n<1023)
        cout<<"1023"<<endl;
    else if(n>8976)
        cout<<"9012"<<endl;
    else
    {
        n++;
        while(flag)
        {
            if(BY(n))
                flag=false;
            else
                n++;
        }
        cout<<n<<endl;
    }
    return 0;
}