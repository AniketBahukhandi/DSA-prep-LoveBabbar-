#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else
        return n*factorial(n-1);
}
int combination(int n,int r){
    int c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
int main()
{   int n,r;
    cin>>n>>r;
    int ans=combination(n,r);
    cout<<"the combinations are:"<<ans;
    return 0;
}