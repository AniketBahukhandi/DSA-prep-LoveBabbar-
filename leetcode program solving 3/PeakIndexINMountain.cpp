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
int peakIndex(int arr[],int size)
{
    int lb=0;
    int ub=size-1;
    int mid;
    mid=ub+(lb-ub)/2;
    while(lb<ub){
        if(arr[mid]<arr[mid+1]){
            lb=mid+1;
        }
        else{
            ub=mid;
        }
        mid=ub+(lb-ub)/2;
    }
    return mid;
}
int main()
{   int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the array: ";
    int arr[100];
    userin(arr,n);
    cout<<"the peak index is "<<peakIndex(arr,n);
}