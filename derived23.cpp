
#include "prob3.h"

Derived2::Derived2(int x, int y, int z) : Derived1(x, y)
{
    value = z;
    cout << "Derived2 Constructor" << endl;
}
Derived2::Derived2(const Derived2& obj)
    : Derived1(obj), value(obj.value)
{
    cout << "Derived2 Copy Constructor" << endl;
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
void Derived2::setValue(int x)
{
    cout << "Derived2::setValue()" << endl;
    value = x;
}
Derived2& Derived2::operator=(const Derived2& obj)
{
    cout << "Derived2::operator=()" << endl;

    if (this != &obj)
    {
        Derived1::operator=(obj);
        value = obj.value;
    }

    return *this;
}
