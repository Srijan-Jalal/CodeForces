#include <iostream>
using namespace std;
int main(void)
{
    int n,sum = 0;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    
    for(int i=0;i<n;i++)
    {
        sum += mat[i][i];
        sum += mat[i][n-1-i];
        sum += mat[i][(n-1)/2];
        sum += mat[(n-1)/2][i];
    }
    
    cout<< sum - 3*(mat[(n-1)/2][(n-1)/2])<<endl;

    return 0;
}