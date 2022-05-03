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
int searchInRotated(int arr[],int size,int k){
    int pivotIndex=pivot(arr,size);
    int output;
    if(arr[pivotIndex]<=k && k<=arr[size-1]){
        output=binarysearch(arr,size-1,pivotIndex,k);
    }
    else
        output=binarysearch(arr,pivotIndex-1,0,k);
    return output;
}
int binarysearch(int arr[],int end,int start,int k){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
    }
    return -1;
}
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
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
{   int n;
    cin>>n;
    int arr[100];
    userin(arr,n);
    int k;
    cin>>k;
    int ans=searchInRotated(arr,n,k);
    cout<<ans;
    return 0;
}