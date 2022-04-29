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
int leftoccurence(int arr[],int size, int key){
    int ans=-1;
    int lb=0;
    int ub=size-1;
    while(lb<=ub){
        int mid=ub+(lb-ub)/2;
        if(arr[mid]==key){
            ans=mid;
            ub=mid-1;
        }
        else if(arr[mid]>key){
             ub=mid-1;
        }
        else if(arr[mid]<key){
            lb=mid+1;
        }
    }
    return ans;
}
int rightoccurence(int arr[],int size, int key){
    int ans=-1;
    int lb=0;
    int ub=size-1;
    while(lb<=ub){
        int mid=ub+(lb-ub)/2;
        if(arr[mid]==key){
            ans=mid;
            lb=mid+1;
        }
        else if(arr[mid]>key){
            ub=mid-1;
        }
        else if(arr[mid]<key){
            lb=mid+1;
        }
    }
    return ans;
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
    cout<<"the left most occurence is at :"<<leftoccurence(arr,n,key)<<endl;
    cout<<"the right most occurence is at : "<<rightoccurence(arr,n,key)<<endl;
    return 0;
}