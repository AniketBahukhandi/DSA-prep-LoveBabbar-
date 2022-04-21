#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main()
{   int n,search;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[100];
    cout<<"enter the element in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the reverse of the array is :";
    reverse(arr,n);

    return 0;
}