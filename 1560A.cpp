#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector <int> vec;
    int i=0,k=1,t;
    while(i<1000)
    {
        if(!(k%3==0 || k%10==3))
        {
            vec.push_back(k);
            i++;
        }
        k++;
    }
    cin>>t;
    while(t--!=0)
    {
        cin>>k;
        cout<<vec[k-1]<<endl;
    }
    return 0;
}