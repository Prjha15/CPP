#include<iostream>
using namespace std;
int largest(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        cout<<"num1 is largest: "<<num1;
    }
    if(num2>num1 && num2>num3){
        cout<<"num2 is largest: "<<num2;
    }
    if(num3>num1 && num3>num2){
        cout<<"num1 is largest: "<<num1;
    }
}
int main(){
    int a,b,c;
    cout<<"ENTER THE VALUE OF a:";
    cin>>a;
    cout<<"ENTER THE VALUE OF b:";
    cin>>b;
    cout<<"ENTER THE VALUE OF c:";
    cin>>c;
    largest(a,b,c);
    return 0;
}
