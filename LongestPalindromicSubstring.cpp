#include <iostream>
#include <string>
#include <vector>



int main() {
    std::string s;
    std::cin >> s;
    auto len = s.size();
    std::vector<std::vector<bool>> dp(len, std::vector<bool>(len, false));
    int ans = 1;
    int left = 0;
    int right = 0;
    for (int i = 0; i < len; ++i) {
        dp[i][i] = true;
        if (i != len - 1) { 
            dp[i][i + 1] = (s[i] == s[i + 1]);
            if (dp[i][i + 1]) ans = 2;
        }
    }
    for (int i = 2; i < len; ++i){
        for (int j = 0; j < len - i; ++j) {
            dp[j][j + i] = (s[j] == s[j + i]) && (dp[j + 1][j + i - 1]);
            if (dp[j][j + i] && (i + 1) > ans) {
                left = j;
                ans = (i + 1); 
            }
        }
    }
    std::cout << s.substr(left, ans) << '\n';
    return 0;
}