#include<iostream>
#include<vector>  
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;
    cout<<"element at 2nd Index "<<v.at(2)<<endl;
    cout<<"front ->"<<v.front()<<endl;
    cout<<"back ->"<<v.back()<<endl;
    cout<<"befor pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    
    cout<<"after pop back ->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<"before clear list ->"<<v.size()<<endl;
    v.clear();
    cout<<"after clear list ->"<<v.size()<<endl;

    return 0;
}