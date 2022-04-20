#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n<2)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
// to find the nth element in the fibonacci series
int term(int n){
    int a=0,temp;
    int b=1;
    for(int i=2;i<n;i++){
        temp=a+b;
        a=b;
        b=temp;
        }
    return temp;
}
int main()
{   int n;
    cin>>n;
    cout<<"the "<<n<<"th element is "<<term(n)<<endl;
    cout<<"the series is :";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i);
     }
    return 0;
}