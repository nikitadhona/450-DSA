#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,mid=0,end=n-1;
    while(mid<=end){
        if(arr[mid]==0){
            int temp=arr[start];
            arr[start]=arr[mid];
            arr[mid]=temp;
            start++;
            mid++;
        }
        else if(arr[mid]==2){
            int temp=arr[end];
            arr[end]=arr[mid];
            arr[mid]=temp;
            end--;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}