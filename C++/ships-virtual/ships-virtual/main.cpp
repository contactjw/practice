#include <iostream>
#include <string>
#include <iomanip>
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

int main()
{
    const int NUM_SHIPS = 3;
    Ship *shipArray[NUM_SHIPS] = {
                                   new Ship("Titanic", "July 5, 1912"),
                                   new CruiseShip("Carnival", 6300),
                                   new CargoShip("Deliverer", 1300)
                                 };
    
    for (int i = 0; i < NUM_SHIPS; i++)
    {
        shipArray[i]->print();
        cout << endl;
    }

    
    return 0;
}
