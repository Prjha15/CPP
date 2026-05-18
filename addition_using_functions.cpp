#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int p,q,result=0;
    cout<<"ENTER THE VALUE OF p";
    cin>>p;
    cout<<"ENTER THE VALUE OF q";
    cin>>q;
    result=add(p,q);
    cout<<"SUM IS "<<result;
    return 0;
}