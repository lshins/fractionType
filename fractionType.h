#ifndef H_fractionType
#define H_fractionType

#include <iostream>

using namespace std;

class fractionType
{
public:
	int numerator;
	int denominator;

	friend ostream& operator<<(ostream&, const fractionType&);
	friend istream& operator>>(istream&, fractionType&);

	void setFraction(double, double);

	fractionType operator+(const fractionType&) const;
	fractionType operator-(const fractionType&) const;
	fractionType operator*(const fractionType&) const;
	fractionType operator/(const fractionType&) const;
	bool operator<(const fractionType&) const;
	bool operator<=(const fractionType&) const;
	bool operator>(const fractionType&) const;
	bool operator>=(const fractionType&) const;
	bool operator==(const fractionType&) const;
	bool operator!=(const fractionType&) const;

	fractionType(double n = 1, double d = 2);
};

#endif