#include<iostream>
using namespace std;
class students{
    private:
    string name;
    int roll_number;
    float marks;
    public:
    void input(){
        cout<<"ENTER THE NAME";
        cin>>name;
        cout<<"ENTER THE ROLL NO.";
        cin>>roll_number;
        cout<<"ENTER THE MARKS";
        cin>>marks;
    }
    void display(){
        cout<<"NAME IS:"<<name<<endl;
        cout<<"ROLL NUMBER IS:"<<roll_number<<endl;
        cout<<"MARKS IS:"<<marks<<endl;
    }
};
    int main(){
        students s1;
        s1.input();
        s1.display();
        return 0;
    }