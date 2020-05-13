#include <iostream>
#include "fractionType.h"

using namespace std;

int main()
{
	cout << "Welcome to the fractionType Program!" << endl << endl;
	fractionType f1(4, 7), f2(3, 2);
	cout << "Fraction 1: " << f1 << endl;
	cout << "Fraction 2: " << f2 << endl;
	cout << endl;
	cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
	cout << f1 << " - " << f2 << " = " << f1 - f2 << endl;
	cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
	cout << f1 << " / " << f2 << " = " << f1 / f2 << endl;
	cout << endl;
	cout << f1 << " is ";
	if (f1 == f2)
		cout << "equal ";
	else if (f1 != f2)
		cout << "not equal ";
	cout << "to " << f2 << endl;
	return 0;
}