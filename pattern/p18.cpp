#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char c='A';
        char dummy=c+i;
        for(int j=0;j<=i;j++){
            cout<<dummy<<" ";
            dummy++;
        }
        cout<<endl;
    }
    return 0;
}