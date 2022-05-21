#include<iostream>
#include<map>
using namespace std;
int main()
{
map<int,string> m;
m[1]="aniket";
m[2]=" love";
m[12]="maggie";
m.insert({5,"oreo"});
cout<<"before erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"finding 12 "<<m.count(12)<<endl;

m.erase(12);
cout<<"after erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
auto it=m.find(2);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
    return 0;
}