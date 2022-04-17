// problem number 476 number compliment.
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,ans=0,mask=0;
    cout<<"enter the number for compliment: ";
    cin>>n;
    int m=n;
    if(n==0){
        cout<<"1";
    }
    else{
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    ans=(~n)&mask;
    cout<<ans;
    }
    return 0;
}