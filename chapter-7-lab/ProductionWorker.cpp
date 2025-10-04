#include "ProductionWorker.h"
using namespace std;


productionworker::productionworker(string name, int number, string date, int s, double pay)
    : employee(name, number, date)   
{
    shift = s;
    hourly_pay = pay;
}

productionworker::productionworker() : employee() {
    shift = 0;
    hourly_pay = 0.0;
}

void productionworker::setShift(int s) {
    shift = s;
}

void productionworker::setPay(double pay) {
    hourly_pay = pay;
}


int productionworker::getShift() {
    return shift;
}

double productionworker::getPay() {
    return hourly_pay;
}