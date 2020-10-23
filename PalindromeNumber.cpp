#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    if (n < 0 || (n % 10 == 0 && n != 0)) {
        std::cout << false << '\n';
        return 0;
    }
    int rev = 0;
    while (n > rev) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (n == rev || n == rev / 10) {
        std::cout << true << '\n';
    }else{
        std::cout << false << '\n';
    }
    return 0;
}