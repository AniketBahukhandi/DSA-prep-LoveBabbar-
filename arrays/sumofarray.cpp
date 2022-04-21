#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans+arr[i];
    }
    return ans;
}
int main()
{   int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[100];
    cout<<"enter the element in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the sum of the array is :"<<sum(arr,n);
    return 0;
}