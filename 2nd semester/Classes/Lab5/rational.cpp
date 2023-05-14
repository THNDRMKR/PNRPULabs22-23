#include "rational.h"
#include <iostream>

rational::rational():pair() {}
rational::rational(int num, int den):pair(num,den){}
rational::rational(const rational& r):pair(r) {}
rational::~rational() {}
void rational::Show()
{
	std::cout << get_numerator() << get_denominator();
}
void rational::operator=(const rational& r) {
	set_numerator(r.get_numerator());
	set_denominator(r.get_denominator());
}
std::istream& operator>>(std::istream& in, rational& r) {
	int a, b;
	in >> a >> b;
	r.set_numerator(a);
	r.set_denominator(b);
	return in;
}

std::ostream& operator<<(std::ostream& out, rational& r) {
	std::cout << r.get_numerator() << " " << r.get_denominator();
	return out;
}
rational rational::operator-(rational a)
{
	rational c(get_numerator() - a.get_numerator(),get_denominator()-a.get_denominator());
	return c;
}
rational rational::operator+(rational a)
{
	rational c(get_numerator() + a.get_numerator(), get_denominator() + a.get_denominator());
	return c;
}
rational rational::operator*(rational a)
{
	rational c(get_numerator() * a.get_numerator(), get_denominator() * a.get_denominator());
	return c;
}
