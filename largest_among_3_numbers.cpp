#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"ENTER THE VALUE OF a";
    cin>>a;
    cout<<"ENTER THE VALUE OF b";
    cin>>b;
    cout<<"ENTER THE VALUE OF c";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is largest :"<<a;
    }
    if(b>a && b>c){
        cout<<"b is largest:"<<b;
    }
    if(c>a && c>a){
        cout<<"c is largest:"<<c;
    }
    return 0;
}