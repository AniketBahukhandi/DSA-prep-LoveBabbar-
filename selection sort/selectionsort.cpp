#include<iostream>
using namespace std;
void userin(int arr[],int size){
for(int i=0;i<size;i++){
cin>>arr[i];
}
}
void printa(int arr[],int size){
 for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
void insertionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
            swap(arr[i],arr[minIndex]);
    }
    printa(arr,n);
}
int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in the array :";
    userin(arr,n);
    cout<<"the sorted array is: ";
    insertionsort(arr,n);
    return 0;
}