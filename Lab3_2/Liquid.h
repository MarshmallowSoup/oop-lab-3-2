//////////////////////
//Liquid.h
#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Liquid
{
protected:
	char* name;
	double density;
public:
	char* getName() const { return name; }
	double getDensity() const { return density; }
	void setName(char* value) { name = value; }
	void setDensity(double value) { density = value; }

	Liquid();
	Liquid(char* val, double d);

	~Liquid();


	operator string() const;
	friend ostream& operator << (ostream& out, Liquid& obj);
	friend istream& operator >> (istream& in, Liquid& obj);

};

