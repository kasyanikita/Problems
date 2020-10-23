#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int ans = 0;
    int int_maximum = 2147483647;
    int int_minimum = -2147483648;
    while(number) {
        int pop = number % 10;
        number /= 10;
        if ((ans == int_maximum / 10 && (number % 10) > 7) || (ans > int_maximum / 10)) {
            std::cout << 0 << '\n';
            return 0;
        }
        if ((ans == int_minimum / 10 && (number % 10) < -8) || (ans < int_minimum / 10)) {
            std::cout << 0 << '\n';
            return 0;
        }
        ans = ans * 10 + pop;
    }
    std::cout << ans << '\n';
}