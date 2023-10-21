#include <iostream>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    int letter[26]={0};
    for(char c: str)
    {
        letter[c - 'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(letter[i]>0)
            c++;
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!";
    return 0;
}