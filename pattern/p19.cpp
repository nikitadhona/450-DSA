#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=n-1;i>=0;i--){
        char c='A';
        char dummy=c+i;
        for(int j=n-1;j>=i;j--){
            cout<<dummy<<" ";
            dummy++;
        }
        cout<<endl;
    }
    return 0;
}
