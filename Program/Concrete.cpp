#include "Concrete.h"
#include "stdafx.h"

Concrete::Concrete()
{
	hardness = 0.5f;
	resistance = 0.5f;
}

void Concrete::Describe()
{
	cout << "Concrete Hardness : " << hardness << endl;
	cout << "Concrete Resistance : " << resistance << endl;
}

Concrete::~Concrete()
{
	cout << "Destroyed Concrete" << endl;
}
