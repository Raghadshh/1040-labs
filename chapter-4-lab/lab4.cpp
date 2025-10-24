#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <limits>





int main()
{
    string filename;
    cout<<"Enter a file name: "<<endl;
    cin>>filename;

    const int max = 1000;
    int arr[max];
    int count = 0;

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open file " << filename << endl;
        return 1;
    }

     while (inputFile >> arr[count] && count <max) {
        count++;
    }
    inputFile.close();

    if (count == 0) {
        cout << "The file is empty." << endl;
        return 0;
    }

    int lowest = arr[0];
    int highest = arr[0];
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (arr[i] < lowest) lowest = arr[i];
        if (arr[i] > highest) highest = arr[i];
        total += arr[i];
    }

    double average = (total) / count;

    cout << "Lowest number: " << lowest << endl;
    cout << "Highest number: " << highest << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;

}

