#include<iostream>
using namespace std;
int queries(int arr[],int n){
    int l,r,x;
    cin>>l>>r>>x;
    int ctr=0;
    for(int i=l-1;i<r;i++){
        if((arr[i]^x) > (arr[i]&x)){
            ctr+=1;
        }
    }
    return ctr;

}
int main()
{   int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int q;cin>>q;
        for(int i=0;i<q;i++){
            int ans=queries(arr,n);
            cout<<ans<<endl;
        }
    }

    return 0;
}