#include<bits/stdc++.h>
using namespace std;
void userin(int arr[],int size){
for(int i=0;i<size;i++){
cin>>arr[i];
}
}

int maxProfit(int prices[],int size) {
        int maxi=0;
        int profit=0;
        for (int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                    if(prices[i]<prices[j]){
                        profit=prices[j]-prices[i];
                        maxi=max(maxi,profit);
                    }
            }
        }
        return maxi;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    userin(arr,n);
    cout<<maxProfit(arr,n);
    return 0;
}