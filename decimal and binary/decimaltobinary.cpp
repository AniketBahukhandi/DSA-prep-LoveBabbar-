#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int n;
    int ans=0,i=0;
    cout<<"enter the decimal number :";
    cin>>n;
    while(n!=0){
        int bit=n&1;
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i+=1;
    }
    cout<<"the binary number is :"<<ans;
    return 0;
}