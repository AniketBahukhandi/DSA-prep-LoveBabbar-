#include<iostream>
using namespace std;
int power(int n,int p){
    int ans=1;
    for(int i=0;i<=p;i++){
        ans=ans*n;
    }
    return ans;
}
int main()
{   
    int a,b;
    cout<<"enter the number and power:";
    cin>>a>>b;
    cout<<"the answer is: "<<power(a,b);
    return 0;
}
