#include <iostream>
#include <cmath>
#include <locale>

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, h;

    std::cout << "Введiть верхню основу трапецii (a): ";
    std::cin >> a;

    std::cout << "Введiть нижню основу трапецii (b): ";
    std::cin >> b;

    std::cout << "Введiть висоту трапецii (h): ";
    std::cin >> h;

    double perimeter = a + b + 2 * sqrt(pow((b - a) / 2, 2) + pow(h, 2));
    double area = (a + b) * h / 2;

    std::cout << "Периметр трапецii: " << perimeter << std::endl;
    std::cout << "Площа трапецii: " << area << std::endl;

    return 0;
}
