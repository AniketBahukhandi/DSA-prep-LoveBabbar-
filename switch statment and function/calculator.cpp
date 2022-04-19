#include<iostream>
using namespace std;
int main()
{   int a,b,ans;
    char ch;
    cout<<"Enter the symbol of operation: ";
    cin>>ch;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
    switch (ch)
    {
    case '+':
        ans=a+b;
        break;
    case '-':
        ans=a-b;
        break;
    case '*':
        ans=a*b;
        break;
    case '/':
        ans=a/b;
        break;
    default:
        cout<<"Enter some useful operation";
        break;
    }
    cout<<ans;
    return 0;
}