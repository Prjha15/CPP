#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int exponent){
    int result=pow(base,exponent);
    return result;
}
int main(){
    int b,e,value;
    cout<<"ENTER THE BASE";
    cin>>b;
    cout<<"ENTER THE EXPONENT";
    cin>>e;
    value=power(b,e);
    cout<<"The answer is "<<value;
    return 0;
}