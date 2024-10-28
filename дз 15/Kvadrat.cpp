//
//  Kvadrat.cpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#include "Kvadrat.hpp"
#include <iostream>

using namespace std;


void Kvadrat::setStorona(double a)
{
    storona = a;
}

double Kvadrat::getStorona() const
{
    return storona;
}

void Kvadrat::input()
{
    cout << "Напишите длину стороны квадрата: ";
    cin >> storona;
}

void Kvadrat::output() const
{
    cout << "Длина стороны квадрата: " << storona << endl;
}
