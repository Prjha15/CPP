#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    void input(){
        cout<<"Enter the value of length"<<endl;
        cin>>length;
        cout<<"Enter the value of breadth"<<endl;
        cin>>breadth;
    }
    void display(){
        cout<<"length is "<<length<<endl;
        cout<<"breadth is "<<breadth<<endl;
    }
    void area(){
        int result=length*breadth;
        cout<<"Area is "<<result;
        return;
    }
};
int main(){
    rectangle r1;
    r1.input();
    r1.display();
    r1.area();
    return 0;
}
