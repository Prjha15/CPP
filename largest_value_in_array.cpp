#include<iostream>
using namespace std;
int main(){
    int n,i,j=0;
    cout<<"ENTER THE VALUE OF n";
    cin>>n;
    int value[n];
    for(i=0;i<n;i++){
        cout<<"ENTER THE VALUES";
        cin>>value[i];
    }
    int max=value[0];
    while(j<n){
        if (value[j]<=max){
            j++;
        }
        else{
            max=value[j];
        }
    }
    cout<<" "<<max;
    return 0;
}