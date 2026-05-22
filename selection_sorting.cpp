#include<iostream>
using namespace std;
int main(){
    int n,i,j,mini,temp;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"ENTER";
        cin>>arr[i];
    }
    for(i=0;i<=n-2;i++){
        mini=i;
        for(j=i+1;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini=j;
            }
}
            if(mini!=i){
                temp=arr[i];
                arr[i] = arr[mini];
                arr[mini] = temp;
        }
    }
    for(i=0;i<=n-1;i++){
        cout<<" "<<arr[i];
        }
    return 0;
}