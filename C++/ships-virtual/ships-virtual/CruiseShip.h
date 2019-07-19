#ifndef CruiseShip_h
#define CruiseShip_h
#include <iostream>
#include "Ship.h"
using namespace std;

class CruiseShip : public Ship
{
protected:
    int maxPassengers;
public:
    CruiseShip()
    {
        maxPassengers = 0;
    }
    
    CruiseShip(string name, int passengers)
    {
        maxPassengers = passengers;
        shipName = name;
    }
    
    CruiseShip(int passengers, string name, string year) : Ship(name, year)
    {
        maxPassengers = passengers;
    }
    
    void setPassengers(int passengers)
    {
        maxPassengers = passengers;
    }
    
    int getPassengers()
    {
        return maxPassengers;
    }
    
    void print()
    {
        cout << "Name: " << Ship::getName() << endl;
        cout << "Max Passengers: " << getPassengers() << endl;
    }
};

#endif /* CruiseShip_h */
