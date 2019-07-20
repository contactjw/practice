#ifndef BasicShape_h
#define BasicShape_h
#include <iostream>
using namespace std;


class BasicShape
{
private:
    double area;
public:
    BasicShape()
    {
        area = 0.0;f
    }
    
    double getArea()
    {
        return area;
    }
    
    // a pure virtual function signifies an abstract base class
    virtual void calcArea() = 0;
};
#endif /* BasicShape_h */
