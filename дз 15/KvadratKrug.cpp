//
//  KvadratKrug.cpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#include "KvadratKrug.hpp"
#include <iostream>

using namespace std;

KvadratKrug::KvadratKrug() : Kvadrat(), Krug() {}
KvadratKrug::KvadratKrug(double a, double d) : Kvadrat(a), Krug(d) {}

bool KvadratKrug::mogetKrugPomestitsaVKvadrate() const
{
    return getDiameter() <= getStorona();
}

void KvadratKrug::input()
{
    Kvadrat::input();
    Krug::input();
}

void KvadratKrug::output() const
{
    Kvadrat::output();
    Krug::output();

    if (mogetKrugPomestitsaVKvadrate())
    {
        cout << "Круг может поместиться в квадрате" << endl;
    }
    else
    {
        cout << "Круг не может поместиться в квадрате" << endl;
    }
}
