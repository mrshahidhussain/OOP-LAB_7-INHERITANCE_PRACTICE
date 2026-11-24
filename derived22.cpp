
#include "prob2.h"

Derived2::Derived2(int x, int y, int z) : Derived1(x, y)
{
    value = z;
    cout << "Derived2 Constructor" << endl;
}

Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}

void Derived2::print()
{
    cout << "Derived2::print()" << endl;

    cout << "Base value: " << Base::value << endl;
    cout << "Derived1 value: " << Derived1::value << endl;
    cout << "Derived2 value: " << value << endl;
}
