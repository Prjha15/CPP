#include<iostream>
using namespace std;
void print(int n){
    if(n==){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int a;
    cout<<"ENTER THE VALUE OF a";
    cin>>a;
    print(a);
    return 0;
}