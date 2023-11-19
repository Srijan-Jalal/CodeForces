#include <iostream>
using namespace std;
int main(void)
{
    int n,a,min_ind=0,max_ind=0,max_ele,min_ele;
    cin>>n>>a;
    max_ele=min_ele=a;
    for (int i = 1; i < n; ++i)
    {
        cin>>a;
        if (a>max_ele)
        {
            max_ele = a;
            max_ind = i;
        }
        if (a <= min_ele)
        {
            min_ele = a;
            min_ind = i;
        }
    }
    cout << max_ind + (n-1-min_ind) - (min_ind < max_ind ? 1 : 0) << endl;
    return 0;
}