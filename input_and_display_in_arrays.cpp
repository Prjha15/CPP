#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n";
    cin>>n;
    int value[n];
    for(i=0;i<n;i++){
        cout<<"ENTER THE VALUES";
        cin>>value[i];
    }
    for(i=0;i<n;i++){
        cout<<value[i]<<endl;
    }
    return 0;
}
