#include "ComplexNumber.hpp"
namespace ComplexLibrary{

bool operator==(const Complex &c1, const Complex &c2)
{
    double tol=1e-16;
    bool c;
    if((c1.Reale-c2.Reale)<tol && (c1.Immaginaria-c2.Immaginaria)<tol)
        c=true;
    else
        c=false;
    return c;
}


ostream& operator<<(ostream& os, const Complex &c)
{
    if (c.Reale==0)
        (os  << c.Immaginaria) << "i";
    else if (c.Immaginaria==0)
        os << c.Reale;
    else if (c.Immaginaria>0)
        (((os << c.Reale) << "+") << c.Immaginaria) << "i";
    else
        ((os << c.Reale) << c.Immaginaria) << "i";
    return os;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex  c(c1.Reale+c2.Reale, c1.Immaginaria+c2.Immaginaria);
    return c;
}

Complex coniugato(const Complex c)
{
    Complex d(c.Reale, -c.Immaginaria);
    return d;
}

}


