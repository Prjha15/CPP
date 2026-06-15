#include<iostream>
using namespace std;
float area(int r){
    return 3.14*r*r;
}
float area(int length,int breadth){
    return length*breadth;
}
int main(){
    float radius,length,breadth;
    cout<<"ENTER THE VALUE OF RADIUS OF CIRCLE"<<endl;
    cin>>radius;
    cout<<"ENTER THE VALUE OF LENGTH OF RECTANGLE"<<endl;
    cin>>length;
    cout<<"ENTER THE VALUE OF BREADTH OF RECTANGLE"<<endl;
    cin>>breadth;
    float result1=area(radius);
    float result2=area(length,breadth);
    cout<<"Area of circle is "<<result1<<endl;
    cout<<"Area of rectangle is "<<result2<<endl;
    return 0;
}