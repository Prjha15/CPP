#include<iostream>
using namespace std;
int n;
int main(){
    cout<<"ENTER THE NUMBER";
    cin>>n;
    for(int i=1;i<11;i++){
        int table=n*i;
        cout<<"  "<<table<<endl;
    }
}