#include <iostream>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    char mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='C' || mat[i][j]=='Y' || mat[i][j]=='M')
            {
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}