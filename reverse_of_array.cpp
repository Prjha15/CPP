#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"ENTER";
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}