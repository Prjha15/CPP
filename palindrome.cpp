#include<iostream>
using namespace std;
int main(){
    int n; 
    int temp;
    int m;
    int i;
    int p=0;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    temp=n;
    while (temp>0){
        m=temp%10;
        p=p*10+m;
        temp/=10;
    }
    if(p==n){
        cout<<"NUMBER IS PALINDROME";
    }
    else{
        cout<<"NUMBER IS NOT PALINDROME";
    }
    return 0;
}