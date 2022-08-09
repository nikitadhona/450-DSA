//Using Dutch National Flag Algorithm in short

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


//Leetcode Problem 75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2: 
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};