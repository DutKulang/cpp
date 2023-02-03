#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, sum;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    sum = add(x, y);
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
    return 0;
}
