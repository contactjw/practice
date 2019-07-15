#ifndef ProductionWorker_h
#define ProductionWorker_h
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
protected:
    int shift;
    double payRate;
public:
    ProductionWorker() : Employee()
    {
        shift = 0;
        payRate = 0;
    }
    
    ProductionWorker(int s, double pay, string name, int num, string date) : Employee(name, num, date)
    {
        shift = s;
        payRate = pay;
    }
    
    void setShift(int s)
    {
        shift = s;
    }
    
    void setPay(double pay)
    {
        payRate = pay;
    }
    
    string getShift()
    {
        if (shift == 1)
            return "Day Shift";
        else
            return "Night Shift";
    }
    
    double getPayRate()
    {
        return payRate;
    }
    
    // FINISH WRITING PRODUCTIONWORKER CLASS
    
    
};


#endif /* ProductionWorker_h */
