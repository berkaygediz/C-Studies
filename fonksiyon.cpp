#include <iostream>

void fonk(int& a, int& b) {
    int degistir = a + b;
    int temp = a;
    a = b;
    b = temp;

    std::cout << "A: " << a << ", B: " << b << "  DEGISTIR: " << degistir << std::endl;
}

int main() {
    int x, y;
    std::cout << "ilk deger: ";
    std::cin >> x;
    std::cout << "ikinci deger: ";
    std::cin >> y;

    fonk(x, y);

    return 0;
}