#include<iostream>
using namespace std;
class rectangle{
private:
int length;
int breadth;
public:
rectangle(int l,int b){
    length=l;
    breadth=b;
}
void display(){
    cout<<"length is "<<length<<endl;
    cout<<"breadth is "<<breadth<<endl;
}
};
int main(){
    rectangle r1(12,23);
    r1.display();
    return 0;
}