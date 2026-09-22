#include<iostream>
#include<string>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    float max_speed;
    string color;
};
int main()
{
    car car1;
    car1.brand="BMW";
    car1.model="X5";
    car1.max_speed=250.5;
    car1.color="Black";
    cout<<"Brand: "<<car1.brand<<endl;
    cout<<"Model: "<<car1.model<<endl;
    cout<<"Max Speed: "<<car1.max_speed<<endl;
    cout<<"Color: "<<car1.color<<endl;

    car car2;
    car2.brand="Audi";
    car2.model="A4";
    car2.max_speed=240.0;
    car2.color="White";
    cout<<"Brand: "<<car2.brand<<endl;
    cout<<"Model: "<<car1.model<<endl;
    cout<<"Max Speed: "<<car1.max_speed<<endl;
    cout<<"Color: "<<car1.color<<endl;
    return 0;

    
}
