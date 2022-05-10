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
void painterpartition(int arr[],int n,int p){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(ispossible(arr,n,p,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
bool ispossible(int arr[],int n,int p,int mid){
    int painter=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];
        }
        else{
            painter++;
            if(painter>p || arr[i]>=mid)
            {
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    userin(arr,n);
    cout<<"enter the number of painter:";
    int p;cin>>p;
    painterpartition(arr,n,p);
    return 0;
}