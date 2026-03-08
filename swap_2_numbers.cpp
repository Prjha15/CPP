#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int temp;
    cout<<"ENTER THE VALUE OF a";
    cin>>a;
    cout<<"ENTER THE VALUE OF b";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
}