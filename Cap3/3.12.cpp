#include <iostream>

#include "fecha.h"

using namespace std;

int main() {

    int month, day, year;

    Date actual(1,1,1);

    cout << "Mes: ";
    cin >> month;
    actual.setMonth(month);

    cout << "Dia: ";
    cin >> day;
    actual.setDay(day);

    cout << "Año: ";
    cin >> year;
    actual.setYear(year);

    cout << month << " / " << day << " / " << year << endl;

}