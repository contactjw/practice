#include <iostream>
#include <string>
#include <iomanip>
#include "Ship.h"
using namespace std;

int main()
{
    Ship *boat = new Ship("Titanic", "1775");
    
    boat->print();
    
    return 0;
}

