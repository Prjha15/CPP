#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int interval;
cout<<"ENTER THE NUMBER TILL WHERE YOU WANT TO PRINT PRIME NUMBERS";
cin>>interval;
for (int i=2;i<=interval;i++){
    int count=0;
    int divisor=sqrt(i);
    for (int j=2;j<=divisor;j++){
        if(i%j==0){
            count=count+1;
        }
    }
     if (count==0){
        cout<<"  "<<i;
    }
}

}