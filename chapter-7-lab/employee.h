#ifndef EMPLOYEE_H 
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee {
private:
    string employee_name;
    int employee_number;
    string hire_date;

public:
    employee();
    employee(string name, int number, string date);

    void setName(string name);
    void setNumber(int number);
    void setDate(string date);

    string getName();
    int getNumber();
    string getDate();
};

#endif