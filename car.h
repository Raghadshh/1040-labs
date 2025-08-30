#ifndef CAR_H 
#define CAR_H

#include <string>

class Car{
private:
        int yearModel;
        std::string make;
        int speed;

public:
        Car (int yearmol, std::string m);
               

        int getyearmodel(); 

        std::string getMake();

        int getspeed();

        void accelerate();

        void brake();
};

#endif