#include <string>
#include <iostream>
using namespace std;

class Car{
private:
        int yearModel;
        string make;
        int speed;

public:
        Car (int yearmol, string m){
                yearModel = yearmol;
                make = m;
                speed = 0;
}
        int getyearmodel(){
                return yearModel;
}
        string getMake(){
                return make;
}
        int getspeed(){
                return speed;
}
        void accelerate(){
                speed += 5;
}
        void brake()
{
                speed -= 5;
}
};

int main(){
        Car car1(4,"Tesla");

        for(int i = 0; i< 5; i++)
{
                car1.accelerate();
                cout<<"The cars speed: "<<car1.getspeed()<<endl;
}


        for(int i = 0; i< 5; i++)
{
                car1.brake();
                cout<<"The cars speed: "<<car1.getspeed()<<endl;
}
return 0;

}



