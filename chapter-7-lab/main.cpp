#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main()
{
    productionworker num1("Rachel", 3483,  "2023-15-10", 1, 13.23);
    

    cout << "Employee Info\n";
    cout << "--------------------\n";
    cout << "Name: " << num1.getName() << endl;
    cout << "Number: " << num1.getNumber() << endl;
    cout << "Hire Date: " << num1.getDate() << endl;

    cout << "Shift: ";
    if (num1.getShift() == 1)
        cout << "Day" << endl;
    else if (num1.getShift() == 2)
        cout << "Night" << endl;
    else
        cout << "Invalid" << endl;

    cout << "Hourly Pay Rate: $" << num1.getPay() << endl;

    num1.setShift(2);
    num1.setPay(25.00);
    num1.setName("Bob");

    cout << "\nUpdated Employee Info\n";
    cout << "---------------------\n";
    cout << "Name: " << num1.getName() << endl;
    cout << "Shift: " << (num1.getShift() == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << num1.getPay() << endl;

    return 0;

}