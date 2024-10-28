//
//  Kvadrat.hpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#pragma once
#include <iostream>

class Kvadrat
{
    double storona;

public:
    Kvadrat() : storona(0) {}
    Kvadrat(double a) : storona(a) {}
    
    void setStorona(double a);
    double getStorona() const;

    void input();
    void output() const;
};
