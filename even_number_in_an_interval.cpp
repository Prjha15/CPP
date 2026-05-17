#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int interval;
    cout<<"Enter the interval till where you want even numbers:";
    cin>>interval;
    cout<<"The even numbers are ";
    for(int i=2;i<=interval;i++){
        if(i%2==0){
            cout<<" "<<i;
        }
    }

}

