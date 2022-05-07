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
int bookallocation(int arr[],int n,int s){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int s=0;
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,s,mid)){
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
bool ispossible(int arr[],int n,int s,int mid){
    int pagesum=0;
    int studentcount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount+=1;
            if(studentcount>s ||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
        
    }
    return true;
}
int main()
{   int n;
    cin>>n;
    int arr[100];
    userin(arr,n);
    cout<<"enter the no of students";
    int s;
    cin>>s;
    cout<<bookallocation(arr,n,s);
    return 0;
}