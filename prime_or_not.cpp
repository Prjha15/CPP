#include<iostream>
using namespace std;
int main(){
    int n;
    int temp=0;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int remainder=n%i;
        if(remainder==0){
            temp++;
        }
    }
            if(temp==2){
            cout<<"NUMBER IS PRIME: "<<n<<endl;
        }
        else{
            cout<<"NUMBER IS NOT PRIME";
        }
    return 0;
}