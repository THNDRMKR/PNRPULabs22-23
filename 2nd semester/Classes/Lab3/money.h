#pragma once
#include <iostream>

class Money
{
public:
    long rub;
    int kop;
    Money() { rub = 0; kop = 0; }
    Money(long a, int b) { rub = a; kop = b; }
    Money(const Money& t) { rub = t.rub; kop = t.kop; }
    ~Money() {};
    long get_rub() { return rub; }
    int get_kop() { return kop; }
    long set_rub(long m) { rub = m; }
    int set_kop(int m) { kop = m; }
    Money& operator=(const Money&);
    Money& operator++();
    Money operator++(int);
    Money operator+(const Money&);
    Money operator-(Money& A);
    Money operator/(Money&);
    friend std::istream& operator>>(std::istream& in, Money& A);
    friend std::ostream& operator<<(std::ostream& out, Money& A);
};