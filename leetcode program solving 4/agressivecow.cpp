#include<iostream>
using namespace std;
void userin(int arr[],int size){
for(int i=0;i<size;i++){
cin>>arr[i];
}
}
bool ispossible(int arr[],int k,int mid,int n){
    int count=1;
    int pcow=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-pcow>=mid){
            pcow=arr[i];
            count++;
            if(count==k)
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    userin(arr,n);
    int k;cin>>n;
    int s=0;
    int e=arr[n-1];
    int ans;
    while(s<=e){
        int mid=(s+e)>>1;
        if(ispossible(arr,k,mid,n)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    cout<<ans;
    return 0;
}