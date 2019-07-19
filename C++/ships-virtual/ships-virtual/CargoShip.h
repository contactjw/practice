#ifndef CargoShip_h
#define CargoShip_h
#include <iostream>
#include "Ship.h"
using namespace std;

class CargoShip : public Ship
{
protected:
    int cargoWeight;
public:
    CargoShip()
    {
        cargoWeight = 0;
    }
    
    CargoShip(string name, int weight)
    {
        cargoWeight = weight;
        shipName = name;
    }
    
    CargoShip(int weight, string name, string year) : Ship(name, year)
    {
        cargoWeight = weight;
    }
    
    void setWeight(int weight)
    {
        cargoWeight = weight;
    }
    
    int getWeight()
    {
        return cargoWeight;
    }
    
    void print()
    {
        cout << "Name: " << Ship::getName() << endl;
        cout << "Weight: " << getWeight() << " tons" << endl;
    }
    
};

#endif /* CargoShip_h */
