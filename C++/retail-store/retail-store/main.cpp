#include <iostream>
#include <iomanip>
#include <string>
#include "CustomerData.h"
using namespace std;

int main()
{
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    string phone;
    int customerNumber;
    bool mailingList = false;
    
    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter state: ";
    getline(cin, state);
    cout << "Enter zipcode: ";
    cin >> zip;
    cin.ignore();
    cout << "Enter phone number (xxx-xxx-xxxx format): ";
    getline(cin, phone);
    cout << "Enter new customer number: ";
    cin >> customerNumber;
    cout << "Would you like to be on the mailing list? (1 = yes, 0 = no): ";
    cin >> mailingList;
    
    CustomerData *customer = new CustomerData(customerNumber, mailingList, lastName, firstName, address, city, state, zip, phone);
    
    cout << "First Name: " << customer->getFirstName() << endl;
    cout << "Last Name: " << customer->getLastName() << endl;
    cout << "Address: " << customer->getAddress() << endl;
    cout << "City: " << customer->getCity() << endl;
    cout << "State: " << customer->getState() << endl;
    cout << "Zip Code: " << customer->getZip() << endl;
    cout << "Phone Number: " << customer->getPhoneNumber() << endl;
    cout << "Customer Number: " << customer->getCustomerNumber() << endl;
    cout << "Will Receive Emails: " << customer->getMailingList() << endl;
    
    return 0;
}
