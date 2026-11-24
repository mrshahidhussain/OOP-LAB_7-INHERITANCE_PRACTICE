
#include "prob4.h"
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
ostream& operator<<(ostream& out, const Derived2& obj)
{
    cout << "operator<<" << endl;

    out << "Base value: " << obj.Base::value << endl;
    out << "Derived1 value: " << obj.Derived1::value << endl;
    out << "Derived2 value: " << obj.value;

    return out;
}
