#include <iostream>
#include "pair.h"
#include "rational.h"

void f1(pair& p) {
	p.set_first(-19);
	std::cout << p;
}

pair f2() {
	rational r(23, 45);
	return r;
}

int main()
{
	pair a;
	std::cin >> a;
	std::cout << a;
	pair b(10, 15);
	pair c(100, 69);
	std::cout << b << c;
	a = c - b;
	std::cout << a;
	rational d;
	std::cin >> d;
	std::cout << d;
	f1(d);
	a = f2();
	std::cout << a << f1;	
	return 0;
}