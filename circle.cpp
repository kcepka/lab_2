#include <iostream>
#include <cmath>
using namespace std;

// Функція для знаходження радіуса за довжиною кола
double radiusFromCircumference(double C) {
    return C / (2 * M_PI);
}

int main() {
    double C;
    cout << "Введіть довжину кола: ";
    cin >> C;

    double r = radiusFromCircumference(C);
    cout << "Радіус кола = " << r << endl;

    return 0;
}
