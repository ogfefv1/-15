//
//  Krug.hpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#pragma once
#include <iostream>

class Krug
{
    double diametr;
public:
    Krug() : diametr(0) {}
    Krug(double d) : diametr(d) {}
    void setDiameter(double d);
    double getDiameter() const;
    void input();
    void output() const;
};
