#include "object.h"
#include "pair.h"
#include "rational.h"
#include "vector.h"
#include <iostream>

int main()
{
	vector v(5);
	pair a;
	std::cin >> a;
	rational b;
	std::cin >> b;
	Object* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	std::cout << v;
}