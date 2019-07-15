#ifndef Employee_h
#define Employee_h
#include <string>
using namespace std;

class Employee
{
protected:
    string empName;
    int empNum;
    string hireDate;
public:
    Employee()
    {
        empName = " ";
        empNum = 0;
        hireDate = " ";
    }
    
    Employee(string name, int num, string date)
    {
        empName = name;
        empNum = num;
        hireDate = date;
    }
    
    void setName(string name)
    {
        empName = name;
    }
    
    void setNum(int num)
    {
        empNum = num;
    }
    
    void setDate(string date)
    {
        hireDate = date;
    }
    
    string getName()
    {
        return empName;
    }
    
    int getNum()
    {
        return empNum;
    }
    
    string getDate()
    {
        return hireDate;
    }
    
    
};


#endif /* Employee_h */
