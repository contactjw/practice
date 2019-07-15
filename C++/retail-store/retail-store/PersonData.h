#ifndef PersonData_h
#define PersonData_h
#include <iostream>
#include <string>
using namespace std;


class PersonData
{
protected:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zipCode;
    string phoneNumber;
public:
    PersonData()
    {
        lastName = " ";
        firstName = " ";
        address = " ";
        city = " ";
        state = " ";
        zipCode = 0;
        phoneNumber = " ";
    }
    
    PersonData(string last, string first, string addr, string cit, string sta, int zip, string phone)
    {
        lastName = last;
        firstName = first;
        address = addr;
        city = cit;
        state = sta;
        zipCode = zip;
        phoneNumber = phone;
    }
    
    void setLastName(string last)
    {
        lastName = last;
    }
    
    void setFirstName(string first)
    {
        firstName = first;
    }
    
    void setAddress(string addr)
    {
        address = addr;
    }
    
    void setCity(string cit)
    {
        city = cit;
    }
    
    void setState(string sta)
    {
        state = sta;
    }
    
    void setZip(int zip)
    {
        zipCode = zip;
    }
    
    void setPhone(string phone)
    {
        phoneNumber = phone;
    }
    
    string getLastName()
    {
        return lastName;
    }
    
    string getFirstName()
    {
        return firstName;
    }
    
    string getAddress()
    {
        return address;
    }
    
    string getCity()
    {
        return city;
    }
    
    string getState()
    {
        return state;
    }
    
    int getZip()
    {
        return zipCode;
    }
    
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    
};


#endif /* PersonData_h */
