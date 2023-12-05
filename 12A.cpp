#include <iostream>
using namespace std;

int main(void) 
{
    char arr[3][4];
    cin>>arr[0]>>arr[1]>>arr[2];

    bool isEqual = true;
    if (arr[0][0] != arr[2][2] || arr[0][1] != arr[2][1] || arr[0][2] != arr[2][0] || arr[1][0] != arr[1][2]) {
        isEqual = false;
    }

    if (isEqual) 
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}
