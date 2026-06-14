#include<iostream>
#include<string>
using namespace std;
class cars{
    private:
    string Owner;
    int vehicle_plate;
    public:
    cars(){
        Owner="PRIYANKA";
        vehicle_plate=1234567;
    }
    void display(){
        cout<<Owner<<endl;
        cout<<vehicle_plate<<endl;
    }
};
int main(){
    cars c;
    c.display();
}