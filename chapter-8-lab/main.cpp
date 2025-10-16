#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int userNum;
    int divNum;
    int output;

    try
    {
        cout << "Enter a number for the numerator: ";
        cin >> userNum;
        if (cin.fail()) {
            throw ios_base::failure("basic_ios::clear: iostream error");
        }

        cout << "Enter a number for the denominator: ";
        cin >> divNum;

        if (cin.fail()) {
            throw ios_base::failure("basic_ios::clear: iostream error");
        }

        if (divNum == 0) {
            throw runtime_error("Divide by zero!");
        }

        output = userNum / divNum;
        cout << output << endl;

    }
    
    catch (const ios_base::failure&) {
        cout << "Input Exception: basic_ios::clear: iostream error" << endl;
    }
    catch (const runtime_error&) {
        cout << "Runtime Exception: Divide by zero!" << endl;
    }

    return 0;
}