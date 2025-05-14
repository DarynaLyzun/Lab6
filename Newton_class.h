#pragma once
#include "Solve_class.h"
#include <cmath>

class Newton_class : public Solve_class
{
    private:
        int max;
    public:
        Newton_class();
        ~Newton_class();

        void setMax(int vol_max);

        int count(Func f, double &x);
};