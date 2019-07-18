#include <iostream>
#include <string>
#include <iomanip>
#include "CruiseShip.h"
using namespace std;

int main()
{
    Ship *boat = new Ship("Titanic", "1775");
    
    boat->print();
    
    CruiseShip *ship = new CruiseShip();
    
    cout << endl;
    
    ship->setName("Lusitania");
    ship->setPassengers(15000);
    
    ship->print();
    
    return 0;
}
