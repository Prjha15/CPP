#include<iostream>
using namespace std;
int factorial(int num){
    int result=1;
    for(int i=1;i<=num;i++){
        result=result*i;
    }
    return result;
}
int main(){
    int a,value;
    cout<<"ENTER THE VALUE OF a:";
    cin>>a;
    value=factorial(a);
    cout<<"result is:"<<value;
    return 0;
}