#include "employee.h"
#include <iostream> 
using namespace std;

employee::employee() {
    employee_name = "";
    employee_number = 0;
    hire_date = "";
}

employee::employee(string name, int number, string date)
{
    employee_name = name;
    employee_number = number;
    hire_date = date;
}
void employee::setName(string name) {
    employee_name = name;
}

void employee::setNumber(int number) {
    employee_number = number;
}

void employee::setDate(string date) {
    hire_date = date;
}


string employee::getName() {
    return employee_name;
}

int employee::getNumber() {
    return employee_number;
}

string employee::getDate() {
    return hire_date;
}