#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int factorial=1;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"FACTORIAL IS:"<<factorial;
}