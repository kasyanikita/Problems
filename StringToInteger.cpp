#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;
    uint32_t i = 0;
    int ans = 0;
    int sign = 1; 
    while(i < s.size() && s[i] == ' ') {
        ++i;
    }
    if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i++] == '+') ? 1: -1;
    }
    while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
        if ((ans == INT32_MAX/10 && (s[i] - '0') > INT32_MAX % 10) || ans > INT32_MAX/10) {
            ans = (sign == 1) ? INT32_MAX: INT32_MIN;
            std::cout << ans << '\n';
            return 0;
        }
        ans = ans * 10 + (s[i++] - '0');
    }
    std::cout << ans*sign << '\n';
    return 0;
}