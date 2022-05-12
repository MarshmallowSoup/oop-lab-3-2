// Lab3_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Alcohol.h"
#include "Liquid.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	Alcohol a1;
	cout << " Alcohol" << endl; 
	cin >> a1;
	cout << a1 << endl;
	double d1;
	cout << "change density" << endl;
	cout << " density: "; cin >> d1;
	a1.editDensity(d1);
	cout << a1 << endl;
	
	a1.~Alcohol();

	return 0;

}
