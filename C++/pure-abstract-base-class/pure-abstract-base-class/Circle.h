#ifndef Circle_h
#define Circle_h
#include <iostream>
using namespace std;
#include "BasicShape.h"


class Circle : public BasicShape
{
private:
    long int centerX;
    long int centerY;
    double radius;
public:
    Circle(long int x, long int y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
        calcArea();
    }
    
    long int getCenterX()
    {
        return centerX;
    }
    
    long int getCenterY()
    {
        return centerY;
    }
    
    double getRadius()
    {
        return radius;
    }
    
    void calcArea()
    {
        area = 3.14159 * radius * radius;
    }
};

#endif /* Circle_h */
