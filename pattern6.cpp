#include<iostream>
using namespace std;
using namespace std;
int main(){
    int n,i,j;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(j=1;j<=2*n-2*i+1;j++){
            cout<<"*";
        }
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
     cout<<endl;
    }
     return 0;
}