#include <iostream>
#include <iomanip>
#include "TeamLeader.h"
using namespace std;

int main()
{
    string name;
    double salary;
    double bonus;
    int shift;
    int empID;
    string dateHired;
    int hoursComplete;
    int requiredHours;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Please enter employee ID number: ";
    cin >> empID;
    cin.ignore();
    cout << "Enter the date you were hired: ";
    getline(cin, dateHired);
    cout << "Enter your monthly bonus: ";
    cin >> bonus;
    cout << "Enter required training hours: ";
    cin >> requiredHours;
    cout << "Enter completed training hours: ";
    cin >> hoursComplete;
    cout << "Enter shift (1 = day shift, 2 = night shift): ";
    cin >> shift;
    while(shift != 1 && shift != 2)
    {
        cout << "Enter 1 for day shift or 2 for night shift: ";
        cin >> shift;
    }
    
    TeamLeader* leader = new TeamLeader(bonus, requiredHours, hoursComplete, shift, salary, name, empID, dateHired);
    
    cout << setprecision(2) << fixed;
    cout << "Name: " << leader->getName() << endl;
    cout << "ID Number: " << leader->getNum() << endl;
    cout << "Date Hired: " << leader->getDate() << endl;
    cout << "Shift: " << leader->getShift() << endl;
    cout << "Monthly Bonus: $" <<  leader->getBonus() << endl;
    cout << "Training hours needed: " << leader->getRequiredHours() << endl;
    cout << "Training hours finished: " << leader->getHoursFinished() << endl;
    cout << "Hours left to complete: " << leader->getRequiredHours() - leader->getHoursFinished() << endl;
    
    
    return 0;
}
