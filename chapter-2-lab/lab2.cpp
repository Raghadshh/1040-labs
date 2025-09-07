//Raghad Shaheen - rs1755

#include <string>
#include <iostream>
#include "car.h"

using namespace std;

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



