//////////////////////
//Alcohol.h
#pragma once
#include "Liquid.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Alcohol :
    public Liquid
{
private:
    double strengh;
public:
    double getStrengh() { return strengh; }
    void setStrengh(double value) { strengh = value; }

    Alcohol();
    Alcohol(char* val1, double val2, double val3);

    ~Alcohol();

    friend ostream& operator << (ostream& out, Alcohol& obj);
    friend istream& operator >> (istream& in, Alcohol& obj);
    operator string()const;

    void editDensity(double value);
};

