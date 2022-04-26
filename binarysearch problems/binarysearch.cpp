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
int binarysearch(int arr[],int key,int size){
    int ub=size-1;
    int lb=0;
    while(ub>=lb){
    int mid=(ub+lb)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            lb=mid+1;
        }
        else{
            ub=mid-1;
        }
    }
    return -1;
}
int main()
{   int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the array: ";
    int arr[100];
    userin(arr,n);
    cout<<"enter the element to search: ";
    int key;
    cin>>key;
    int ans=binarysearch(arr,key,n);
    cout<<ans+1;
    return 0;
}