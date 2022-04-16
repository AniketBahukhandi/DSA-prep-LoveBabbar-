#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int n,ans=0,i=0;
    cout<<"enter the number :";
    cin>>n;
    while(n!=0)
    {
        int bit=n%10;
        ans=bit*pow(2,i)+ans;
        i++;
        n=n/10;
    }
    cout<<"the decimal no is :"<<ans;
    return 0;
}