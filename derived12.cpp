
#include "prob2.h"

Derived1::Derived1(int x, int y) : Base(x)
{
    value = y;
    cout << "Derived1 Constructor" << endl;
}

Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}
