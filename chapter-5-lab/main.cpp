#include <map>
#include <string>
#include <iostream>

using namespace std;

int main () {
string studentName;
double studentGrade;
bool exists = false;

map<string, double> studentGrades;

// Students' grades (pre-entered)
studentGrades.emplace("Harry Rawlins", 84.3);
studentGrades.emplace("Stephanie Kong", 91.0);
studentGrades.emplace("Shailen Tennyson", 78.6);
studentGrades.emplace("Quincy Wraight", 65.4);
studentGrades.emplace("Janine Antinori", 98.2);

// TODO: Read in new grade for a student, output initial{

cout << "Please enter student name: ";
getline(cin, studentName);

for (const auto& [key, value] : studentGrades)
{
    if (key == studentName)
    {
        exists = true;
    }
    
}

if (exists == false){
    cout << "Not a student"<< endl;
}else {

    cout<< studentName << "'s orginal grade is "<< studentGrades[studentName]<<endl;

    cout << "Please enter new grade: ";
    cin >> studentGrade;

    studentGrades[studentName] = studentGrade;
    cout<< studentName <<"'s new grade is "<<studentGrades[studentName]<<endl;
}

    
    




return 0;
}