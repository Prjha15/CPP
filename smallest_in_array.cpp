#include<iostream>
using namespace std;
int main(){
    int i,j=0,n;
    cout<<"ENTER THE VALUE OF n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"ENTER:";
        cin>>arr[i];
    }
    int min=arr[0];
    while(j<n){
        if(arr[j]>=min){
            j++;
        }
        else{
            min=arr[j];
        }
    }
    cout<<" "<<min;
    return 0;
}
