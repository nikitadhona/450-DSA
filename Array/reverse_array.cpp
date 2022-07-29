#include<iostream>
using namespace std;
void reverse_array(int arr[],int start,int end){

    if(start>end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse_array(arr,start+1,end-1);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    reverse_array(arr,0,n-1);
    printArray(arr,n);
    return 0;
}