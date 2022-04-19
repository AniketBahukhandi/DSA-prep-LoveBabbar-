#include<iostream>
using namespace std;

int even(int num){
 if (num&1){
     return 0;
 }
 else
    return 1;
}
int main()
{   int n;
    cin>>n;
    if(even(n)==1)
        cout<<"the number is even";
    else
        cout<<"the number is odd";
    
    return 0;
}