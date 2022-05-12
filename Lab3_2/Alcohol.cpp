//////////////////////
// Alcohol.h
#include "Alcohol.h"

Alcohol::Alcohol()
{
	name = (char*)"Alcohol";
	density = 1;
	strengh = 100;

}

Alcohol::Alcohol(char* val1, double val2, double val3)
{
	name = val1;
	density = val2;
	strengh = val3;
}

Alcohol::~Alcohol()
{
	cout << "Oh no!! Bottle with " << name << " was broken(" << endl;
}



Alcohol::operator string() const
{
	stringstream sout;
	sout << "Liquid: Alcohol" << endl << " Name: " << name << endl << " Density: " << density << endl << " Strengh: " << strengh;
	return sout.str();
}

void Alcohol::editDensity(double value)
{
	setDensity(value);
}

ostream& operator<<(ostream& out, Alcohol& obj)
{
	out << string(obj);
	return out;
}

istream& operator>>(istream& in, Alcohol& obj)
{
	char* nm = new char();
	cout << " Name: "; in >> nm;
	cout << " Density: "; in >> obj.density;
	obj.name = nm;
	cout << "Strengh "; in >> obj.strengh;
	cout << endl;
	return in;
}
