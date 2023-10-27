#include <iostream>
using namespace std;
int main()
{
  int m, n;
  cin>>m>>n;
  int rem = m % n;
  for(int i = 0; i < (n - rem); i++)
    cout<<(m/n)<<" ";
  for(int i = 0; i < rem; i++)
    cout<<(m/n + 1)<<" ";
  cout<<endl;
  return 0;

}