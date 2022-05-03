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
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
return s;
}
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[100];
    int brr[100];
    cout<<"enter the array";
    userin(arr,n);
    cout<<"enter the rotated array";
    userin(brr,n);
    cout<<"the pivot index is";
    int pivot=pivotfind(brr,n);
    cout<<pivot;
    return 0;
}