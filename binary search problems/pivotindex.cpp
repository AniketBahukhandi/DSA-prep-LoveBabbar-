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
int pivotfind(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int lsum=0;
    int rsum=sum;
    for(int i=0;i<size;i++){
        rsum-=arr[i];
        if(rsum==lsum){
            return i;
        }
        lsum+=arr[i];
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size ";
    cin>>n;
    int arr[100];
    cout<<"enter the array ";
    userin(arr,n);
    cout<<"the pivot index is ";
    int pivot=pivotfind(arr,n);
    cout<<pivot;
    return 0;
}