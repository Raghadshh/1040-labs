#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
using namespace std;

class productionworker : public employee {
private:
    int shift;           
    double hourly_pay;   

public:
   
    productionworker();

    
    productionworker(string name, int number, string date, int s, double pay);

    
    void setShift(int s);
    void setPay(double pay);

    
    int getShift();
    double getPay();
};

#endif