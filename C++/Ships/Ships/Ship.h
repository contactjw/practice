#ifndef Ship_h
#define Ship_h
#include <iomanip>
#include <string>
using namespace std;


class Ship
{
protected:
    string shipName;
    string yearBuilt;
public:
    Ship()
    {
        shipName = " ";
        yearBuilt = " ";
    }
    
    Ship(string name, string year)
    {
        shipName = name;
        yearBuilt = year;
    }
    
    void setName(string name)
    {
        shipName = name;
    }
    
    void setYearBuilt(string year)
    {
        yearBuilt = year;
    }
    
    string getName()
    {
        return shipName;
    }
    
    string getYearBuilt()
    {
        return yearBuilt;
    }
    
    virtual void print()
    {
        cout << "Ship Name: " << shipName << endl;
        cout << "Year Built: " << yearBuilt << endl;
    }
    
};



#endif /* Ship_h */

