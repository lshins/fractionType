#include <iostream>
#include "fractionType.h"

using namespace std;

ostream& operator<<(ostream& cout, const fractionType& fraction)
{
	cout << fraction.numerator << " / " << fraction.denominator;
	return cout;
}

istream& operator>>(istream& cin, fractionType& fraction)
{
	char ch;
	cin >> fraction.numerator >> ch >> fraction.denominator;
	return cin;
}

void fractionType::setFraction(double n, double d)
{
	numerator = n;
	while (d == 0)
	{
		cout << "Invalid denominator. Input a new denominator value." << endl << endl;
		cin >> d;
	}
	denominator = d;
}

fractionType fractionType::operator+(const fractionType& other) const
{
	fractionType temp;
	temp.numerator = (numerator * other.denominator) + (denominator * other.numerator);
	temp.denominator = denominator * other.denominator;
	return temp;
}

fractionType fractionType::operator-(const fractionType& other) const
{
	fractionType temp;
	temp.numerator = (numerator * other.denominator) - (denominator * other.numerator);
	temp.denominator = denominator * other.denominator;
	return temp;
}

fractionType fractionType::operator*(const fractionType& other) const
{
	fractionType temp;
	temp.numerator = numerator * other.numerator;
	temp.denominator = denominator * other.denominator;
	return temp;
}

fractionType fractionType::operator/(const fractionType& other) const
{
	fractionType temp;
	temp.numerator = numerator * other.denominator;
	temp.denominator = denominator * other.numerator;
	return temp;
}

bool fractionType::operator<(const fractionType& other) const
{
	return ((numerator * other.denominator) < (denominator * other.numerator));
}

bool fractionType::operator<=(const fractionType& other) const
{
	return ((numerator * other.denominator) <= (denominator * other.numerator));
}

bool fractionType::operator>(const fractionType& other) const
{
	return ((numerator * other.denominator) > (denominator * other.numerator));
}

bool fractionType::operator>=(const fractionType& other) const
{
	return ((numerator * other.denominator) >= (denominator * other.numerator));
}

bool fractionType::operator==(const fractionType& other) const
{
	return ((numerator * other.denominator) == (denominator * other.numerator));
}

bool fractionType::operator!=(const fractionType& other) const
{
	return ((numerator * other.denominator) != (denominator * other.numerator));
}

fractionType::fractionType(double n, double d)
{
	numerator = n;
	if (d == 0)
		denominator = 1;
	else
		denominator = d;
}