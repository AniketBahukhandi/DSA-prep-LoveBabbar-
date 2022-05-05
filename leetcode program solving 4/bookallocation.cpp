#include<iostream>
using namespace std;
void userin(int arr[],int size){
for(int i=0;i<size;i++){
cin>>arr[i];
}
}
void printa(int arr[],int size){
 for(int i=0;i<size;i++){
cout<<arr[i]<<"";
}
cout<<endl;
}
int bookallocation(int arr[],int n){

}
int main()
{   int n;
    cin>>n;
    int arr[100];
    userin(arr,n);
    cout<<bookallocation(arr,n);
    return 0;
}