#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    // constructor values from left to right are x coord, y coord, and radius.
    Circle *circ = new Circle(2, 5, 3);
    cout << "Circle Test" << endl;
    cout << "Center X: " << circ->getCenterX() << endl;
    cout << "Center Y: " << circ->getCenterY() << endl;
    cout << "Area: " << circ->getArea() << endl;
    
    cout << endl;
    
    // constructor values from left to right are width and length.
    Rectangle *rect = new Rectangle(6, 12);
    cout << "Rectangle Test" << endl;
    cout << "Width: " << rect->getWidth() << endl;
    cout << "Length: " << rect->getLength() << endl;
    cout << "Area: " << rect->getArea() << endl;
    
    return 0;
}
