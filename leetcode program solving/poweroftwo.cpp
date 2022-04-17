#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the number to check: ";
    cin>>n;
    if(n<=0)
        cout<<"not power of two";
    if((n&(n-1))==0)
        cout<<"power of two";
    else
        cout<<"not power of two";
    return 0;
}