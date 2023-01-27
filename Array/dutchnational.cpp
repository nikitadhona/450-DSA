#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
    return;
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int arr[]={2,5,-6,-7,3,-5,-12,-11};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    display(arr,n);
    return 0;
}