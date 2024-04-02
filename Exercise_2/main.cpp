#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    ComplexLibrary::Complex c1(0,9);
    cout << "c1: " << c1 << endl;
    ComplexLibrary::Complex c2(3,0);
    cout << "c2: " << c2 <<endl;
    ComplexLibrary::Complex c3(4,10);
    cout << "c3: " << c3 << endl;


    ComplexLibrary::Complex d;
    d=coniugato(c1);

    cout << "il coniugato di c1 è: " << d << endl;

    cout << "la somma di c1 e c2 è: " << c1+c2 << endl;

    if (c1==c2)
        cout << "c1 e c2 sono uguali" << endl;
    else
        cout << "c1 e c2 sono diversi" << endl;

    return 0;
}



