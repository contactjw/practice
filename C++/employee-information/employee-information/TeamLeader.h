#ifndef TeamLeader_h
#define TeamLeader_h
#include "ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;

class TeamLeader : public ProductionWorker
{
protected:
    double monthlyBonus;
    int requiredHours;
    int hoursFinished;
public:
    TeamLeader() : ProductionWorker()
    {
        monthlyBonus = 0.0;
        requiredHours = 0;
        hoursFinished = 0;
    }
    
    TeamLeader(double bonus, int reqHours, int hoursDone, int shift, double payRate, string name, int employeeNum, string hireDate) : ProductionWorker(shift, payRate, name, employeeNum, hireDate)
    {
        monthlyBonus = bonus;
        requiredHours = reqHours;
        hoursFinished = hoursDone;
    }
    
    void setBonus(double b)
    {
        monthlyBonus = b;
    }
    
    void setRequiredHours(int hours)
    {
        requiredHours = hours;
    }
    
    void setFinishedHours(int hours)
    {
        hoursFinished = hours;
    }
    
    double getBonus()
    {
        return monthlyBonus;
    }
    
    int getRequiredHours()
    {
        return requiredHours;
    }
    
    int getHoursFinished()
    {
        return hoursFinished;
    }
    
};

#endif /* TeamLeader_h */

