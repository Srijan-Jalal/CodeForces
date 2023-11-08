#include <iostream>
#include <vector>
using namespace std;
int main(void)
{   
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool>alphabets(28, 0);
    for (int i = 0; i < n; ++i)
    	alphabets[tolower(s[i])-'a'] = true;
    for (int i = 0; i < 26; ++i)
    {
    	if(!alphabets[i])
    	{
    		cout<<"NO"<<endl;
    		exit(0);
    	}
    }
    cout<<"YES"<<endl;
    return 0;
}