#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE VALUE OF num:";
    cin>>num;
    int *p=&num;
    cout<<" "<<p<<endl;
    cout<<" "<<&num;
    return 0;
}