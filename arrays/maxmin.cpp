#include<iostream>
using namespace std;
int maxi(int a[],int size){
    int maximum=INT_MIN;
    for(int i=0;i<size;i++){
        // we can also use a max function.
        maximum=max(a[i],maximum);
        /*if(a[i]>maximum){
            maximum=a[i];
        }*/
     }
    return maximum;

}
int mini(int a[],int size){
    int minimum=INT_MAX;
    for(int i=0;i<size;i++){
        // we can also use the minimum function.
        minimum=min(a[i],minimum);
        /*if(a[i]<minimum){
            minimum=a[i];
        }*/
    }
    return minimum;

}
int main()
{   int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[100];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the maximum in the array is:"<<maxi(arr,n)<<endl;
    cout<<"the minimum in the array is :"<<mini(arr,n)<<endl;
    return 0;
}