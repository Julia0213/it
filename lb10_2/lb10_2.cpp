#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Russian");

    double initialAmount, targetAmount, interestRate;

    std::cout << "Введіть початкову суму вкладу: ";
    std::cin >> initialAmount;

    std::cout << "Введіть бажану кінцеву суму: ";
    std::cin >> targetAmount;

    std::cout << "Введіть річний відсоток: ";
    std::cin >> interestRate;

    int years = 0;

    while (initialAmount < targetAmount) {
        initialAmount += initialAmount * (interestRate / 100);
        years++;
    }

    std::cout << "Час, необхідний для досягнення бажаної суми: " << years << " років." << std::endl;

    return 0;
}
