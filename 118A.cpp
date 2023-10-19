#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
int main() {
    
    string str,res;
    cin>>str;
    for(char &c : str)
        c=tolower(c);
    for(char c: str)
    {
        if(c!='a'&& c!='e'&& c!='i'&& c!='o'&& c!='u'&& c!='y')
        {
            res.push_back('.');
            res.push_back(c);
        }
    }
    cout<<res;
    return 0;
}
