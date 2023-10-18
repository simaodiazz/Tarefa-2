#include <iostream>

int main() {
    int *a, *b, c, d;

    a = &c;
    b = &d;

    std::cout << "Digite o número *a: ";
    std::cin >> *a;

    std::cout << "Digite o número b: ";
    std::cin >> *b;

    if (*a == *b) {
        std::cout << "Os números são iguais" << std::endl;
    } else {
        std::cout << "Os números não são iguais" << std::endl;
    }
}
