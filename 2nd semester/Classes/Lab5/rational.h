#pragma once
#include "pair.h"
#include <iostream>
class rational : public pair
{
public:
	rational();
	rational(int, int);
	rational(const rational&);
	~rational();
	void Show();
	int get_numerator() const{ return pair::get_first(); }
	int get_denominator() const{ return pair::get_second(); }
	void set_numerator(int n) { set_first(n); }
	void set_denominator(int n) { set_second(n); }
	void operator=(const rational& frac);
	friend std::istream& operator>>(std::istream& in, rational& r);
	friend std::ostream& operator<<(std::ostream& out, rational& r);
	rational operator-(rational);
	rational operator+(rational);
	rational operator*(rational);
};

