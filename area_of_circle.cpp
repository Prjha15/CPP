#include<iostream>
#include<cmath>
using namespace std;
int main(){
const float pi{3.14159};
float r;
cout<<"ENTER THE VALUE OF r";
cin>>r;
float area=pi*pow(r,2);
cout<<"AREA IS "<<area;
return 0;
}