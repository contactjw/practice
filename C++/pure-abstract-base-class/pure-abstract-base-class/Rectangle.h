#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
#include "BasicShape.h"
using namespace std;

class Rectangle : public BasicShape
{
private:
    long int width;
    long int length;
public:
    Rectangle(long int w, long int len)
    {
        width = w;
        length = len;
        calcArea();
    }
    
    long int getWidth()
    {
        return width;
    }
    
    long int getLength()
    {
        return length;
    }
    
    void calcArea()
    {
        area = length * width;
    }
    
};

#endif /* Rectangle_h */
