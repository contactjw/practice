#ifndef CustomerData_h
#define CustomerData_h
#include "PersonData.h"
#include <iostream>
#include <string>
using namespace std;

class CustomerData : public PersonData
{
protected:
    int customerNumber;
    bool mailingList;
public:
    CustomerData() : PersonData()
    {
        customerNumber = 0;
        mailingList = false;
    }
    
    CustomerData(int custNumber, bool mailing, string last, string first, string addr, string cit, string sta, int zip, string phone) : PersonData(last, first, addr, cit, sta, zip, phone)
    {
        customerNumber = custNumber;
        mailingList = mailing;
    }
    
    void setCustomerNumber(int custNumber)
    {
        customerNumber = custNumber;
    }
    
    void setMailingList(bool mailing)
    {
        if (mailing == 1)
            mailingList = true;
    }
    
    int getCustomerNumber()
    {
        return customerNumber;
    }
    
    bool getMailingList()
    {
        return mailingList;
    }
    
};

#endif /* CustomerData_h */
