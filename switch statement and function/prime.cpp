#include<iostream>
using namespace std;
int prime(int n,int i=2){
  if(n<=2)
    return (i==2)?1:0;
  if(n%i==0)
    return 0;
  if(i*i>n)
    return 1;
  return prime(n,i++);

    }
int main()
{   int n;
    cin>>n;
    int check=prime(n,n/2);
    if(check==1){
        cout<<"this is prime number";
    }
    else{
        cout<<"this is not prime number";
    }
    return 0;
}