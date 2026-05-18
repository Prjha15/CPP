#include<iostream>
using namespace std;
float sum(int n){
    int addition=n*(n+1)/2;
    return addition;
}
int main(){
    int a;
    int result;
    cout<<"ENTER THE NATURAL NUMBER";
    cin>>a;
    result=sum(a);
    cout<<"Addition of provided natural numbers are "<<result;
    return 0;
}