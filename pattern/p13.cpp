#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char c='A';
        for(int j=1;j<=n;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}