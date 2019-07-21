#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
T getMinimum(T num1, T num2)
{
    if (num1 > num2)
        return num2;
    else
        return num1;
}

template <class T>
T getMaximum(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    else return num2;
}

int main()
{
    int intMin, intMax;
    int int1 = 15, int2 = 21;
    double doubleMin, doubleMax;
    double double1 = 15.5, double2 = 16.5;
    
    
    intMin = getMinimum(int1, int2);
    cout << intMin << endl;
    
    intMax = getMaximum(int1, int2);
    cout << intMax << endl;
    
    doubleMin = getMinimum(double1, double2);
    cout << doubleMin << endl;
    
    doubleMax = getMaximum(double1, double2);
    cout << doubleMax << endl;
    
    
    return 0;
}

