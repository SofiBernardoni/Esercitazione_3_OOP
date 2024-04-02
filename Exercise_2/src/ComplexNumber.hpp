#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexLibrary{

struct Complex
{
    double Reale;
    double Immaginaria;

    Complex(double a, double b)
    {
        Reale = a;
        Immaginaria = b;
    }

    Complex() = default;


};

ostream& operator<<(ostream& os, const Complex &c);
Complex operator+(const Complex &c1, const Complex &c2);
bool operator==(const Complex &c1, const Complex &c2);

Complex coniugato(const Complex c);

}


#endif
