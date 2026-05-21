#include<iostream>
using namespace std;
int main(){
    int n,i,j,num;
    cout<<"ENTER THE VALUE OF n";
    cin>>n;
    int value[n];
    for(i=0;i<n;i++){
        cout<<"ENTER THE VALUES";
        cin>>value[i];
    }
    cout<<"ENTER THE NUMBER YOU ARE SEARCHING FOR:";
    cin>>num;
    for(j=0;j<=n;j++){
        if(num==value[j]){
            cout<<"FOUND AT:"<<j;
        }
    }
    return 0;

}