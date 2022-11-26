#include <iostream>

using namespace std;

int main()
{
    int n, prev; //нынешнее число и предыдущее
    bool Upr = true; //флаг
    cout << "Type any number, except zero T_T\n";
    cin >> n; // берём первое число
    prev = n - 1; // предыдущее делаем любое, но меньше чем n, у меня не совсем правильный метод))

    while (n != 0) // пока не введём ноль из цикла не выйдем
    {
        if (n < prev && Upr) Upr = false; // проверка на рост ряда чисел
        prev = n; // предыдущее число заменяем на n
        cin >> n; // и вводим новое n
    }
    cout << "Congratulations, you typed zero!\n"; // интерфейсик
    if (Upr)
    {
        cout << "All numbers were uprising!\n";
    }
    else  cout << "Numbers were typed chaotic, I guess :(\n";
    
}