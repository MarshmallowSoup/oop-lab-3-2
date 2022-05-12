//////////////////////
//Liquid.cpp
#include "liquid.h"

Liquid::Liquid()
{  
	name = (char*)"water";
	density = 1;
}

Liquid::Liquid( char* val, double d)
{
	name = val;
	density = d;
}

Liquid::~Liquid()
{
	cout << "Oh no!! Bottle with " << name << " was broken(" << endl;
	
}


Liquid::operator string() const
{
	stringstream sout;
	sout << "Liquid: " << endl << " Name: " << name << endl << " Density: " << density << endl;
	return sout.str();
}

ostream& operator<<(ostream& out, Liquid& obj)
{

	out << string(obj);
	return out;
}

istream& operator >>(istream& in, Liquid& obj)
{
	char* nm = new char();
	cout << " Name: "; in >> nm;
	cout << " Density: "; in >> obj.density;
	obj.name = nm;
	cout << endl;
	return in;
}
