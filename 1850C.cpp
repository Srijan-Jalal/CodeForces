#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    char mat[8][8];
    while(t--!=0)
    {
        string res = "";
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j] != '.')
                    res.push_back(mat[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}