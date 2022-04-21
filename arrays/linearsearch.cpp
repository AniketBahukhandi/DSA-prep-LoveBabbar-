#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main()
{   int n,search,flag;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[100];
    cout<<"enter the element in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to search: ";
    cin>>search;
    flag=linearsearch(arr,n,search);
    if(flag==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at index: "<<flag+1;
    }
    return 0;
}