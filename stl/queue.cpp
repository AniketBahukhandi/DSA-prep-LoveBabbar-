#include<iostream>
#include<queue>
using namespace std;
int main()
{ queue<string>a;
    a.push("aniket");
    a.push("is");
    a.push("King");
    cout<<"first element "<<a.front()<<endl;
    a.pop();
    cout<<"first element "<<a.front()<<endl;
    cout<<"size after pop "<<a.size()<<endl;
    return 0;
}