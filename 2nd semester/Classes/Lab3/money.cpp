#include <iostream>
#include "money.h"

Money& Money::operator=(const Money& t)
{
    if (&t == this) return *this;
    rub = t.rub;
    kop = t.kop;
    return *this;
}
Money& Money::operator++()
{
    long tmp = rub * 100 + kop;
    tmp++;
    rub = tmp / 100;
    kop = tmp % 100;
    return *this;
}
Money Money::operator ++(int)
{
    long tmp = rub * 100 + kop;
    tmp++;
    Money t(rub, kop);
    rub = tmp / 100;
    kop = tmp % 100;
    return t;
}
Money Money::operator+(const Money& t)
{
    long tmp1 = rub * 100 + kop;
    long tmp2 = t.rub * 100 + t.kop;
    Money p;
    p.rub = (tmp1 + tmp2) / 100;
    p.kop = (tmp1 + tmp2) % 100;
    return p;
}
Money Money::operator-(Money& A)
{
    int tmp1 = rub * 100 + kop;
    int tmp2 = A.rub * 100 + A.kop;
    Money tmp;
    tmp.rub = (tmp1 - tmp2) / 100;
    tmp.kop = (tmp1 - tmp2) % 100;
    return tmp;
}
Money Money::operator/(Money& A)
{
    long tmp1 = rub * 100 + kop;
    long tmp2 = A.rub * 100 + A.kop;
    Money tmp;
    tmp.rub = (tmp1 / tmp2) / 100;
    tmp.kop = (tmp1 / tmp2) % 100;
    return tmp;
}
std::istream& operator>>(std::istream& in, Money& A)
{
    std::cout << "rub?: "; in >> A.rub;
    std::cout << "kop?: "; in >> A.kop;
    return in;
}
std::ostream& operator<<(std::ostream& out, Money& A)
{
    return (out << A.rub << "," << A.kop);
}