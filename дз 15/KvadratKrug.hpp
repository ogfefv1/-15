//
//  KvadratKrug.hpp
//  дз 15
//
//  Created by Егор Джемлиханов on 25.10.2024.
//

#pragma once
#include "Kvadrat.hpp"
#include "Krug.hpp"

class KvadratKrug : public Kvadrat, public Krug
{
public:
    KvadratKrug();
    KvadratKrug(double a, double d);

    bool mogetKrugPomestitsaVKvadrate() const;

    void input();
    void output() const;
};
