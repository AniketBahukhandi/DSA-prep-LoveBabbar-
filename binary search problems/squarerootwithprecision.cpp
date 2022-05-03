#include<iostream>
using namespace std;
int squarebinary(int n){
    int start=0;
    unsigned int end=n;
    long long int mid=start+(end-start);
    long long int ans=-1;
    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
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
double precision(int n,int point,int value){
    double factor=1;
    double ans=value;
    for(int i=0;i<point;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
    }
    }
return ans;
}

int main()
{
    int n;
    cout<<"enter the number to find the square root:";
    cin>>n;
    int ans=squarebinary(n);
    cout<<"enter the precision value :";
    int pre;
    cin>>pre;
    cout<<precision(n,pre,ans);
    return 0;
} 