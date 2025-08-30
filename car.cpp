#include "car.h"

Car::Car(int yearmol, std::string m)
{
    yearModel = yearmol;
    make = m;
    speed = 0;
}

int Car::getyearmodel()
{
        return yearModel;
}

std::string Car:: getMake()
{
        return make;
}

int Car:: getspeed()
{
        return speed;
}

void Car:: accelerate()
{
        speed += 5;
}

void Car:: brake()
{
        speed -= 5;
}