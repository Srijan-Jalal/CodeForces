#include<iostream>
using namespace std;
int main(void)
{
    int bal;
    cin>> bal;
    cout<<(bal/100)+(bal%100)/20+((bal%100)%20)/10+(((bal%100)%20)%10)/5+((((bal%100)%20)%10)%5)<<endl;
    return 0;
}