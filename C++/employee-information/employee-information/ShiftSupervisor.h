#ifndef ShiftSupervisor_h
#define ShiftSupervisor_h
#include "Employee.h"
#include <iostream>
using namespace std;

class ShiftSupervisor : public Employee
{
protected:
    double annualSalary;
    double bonusPay;
public:
    ShiftSupervisor() : Employee()
    {}
    
    ShiftSupervisor(double annual, double bonus, string name, int num, string hired) :
    Employee(name, num, hired)
    {
        annualSalary = annual;
        bonusPay = bonus;
    }
    
    void setSalary(double salary)
    {
        annualSalary = salary;
    }
    
    void setBonus(double bonus)
    {
        bonusPay = bonus;
    }
    
    double getSalary()
    {
        return annualSalary;
    }
    
    double getBonus()
    {
        return bonusPay;
    }
};

#endif /* ShiftSupervisor_h */
