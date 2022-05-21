#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>a;
    a.push("aniket");
    a.push("bahukhandi");
    a.push("king");
    cout<<"top element "<<a.top()<<endl;
    a.pop();
    cout<<"top element "<<a.top()<<endl;
    cout<<"is stack empty "<<a.empty()<<endl;
    cout<<"size of stack "<<a.size()<<endl;
    return 0;
}