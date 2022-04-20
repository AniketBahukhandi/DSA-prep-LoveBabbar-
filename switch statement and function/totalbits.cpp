#include<iostream>
using namespace std;
int bit(int n){
    int ctr=0;
    while(n!=0){
        if(n&1==1)
            ctr++;
        n=n>>1;
    }
    return ctr;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int count=bit(a)+bit(b);
    cout<<"the number of bits are:"<<count;
    return 0;
}