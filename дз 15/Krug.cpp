//
//  Krug.cpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#include "Krug.hpp"
#include <iostream>

using namespace std;

void Krug::setDiameter(double d)
{
    diametr = d;
}

double Krug::getDiameter() const
{
    return diametr;
}

void Krug::input()
{
    cout << "Напишите диаметр окружности: ";
    cin >> diametr;
}

void Krug::output() const
{
    cout << "Диаметр круга: " << diametr << endl;
}
