#include<iostream>
using namespace std;
int binarysearch(int n){
    int start=0;
    int end=n-1;
    long long int  mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binarysearch(n);
}