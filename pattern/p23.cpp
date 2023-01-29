#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}