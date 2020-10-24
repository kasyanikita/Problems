#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<char, int> hash;
    std::string s;
    std::cin >> s;
    hash['I'] = 1;
    hash['V'] = 5;
    hash['X'] = 10;
    hash['L'] = 50;
    hash['C'] = 100;
    hash['D'] = 500;
    hash['M'] = 1000;
    int i = 0;
    int ans = 0;
    while(i < s.size()) {
        if (i == s.size() - 1) {
            ans += hash[s[i]];
            break;
        }
        if (hash[s[i]] >= hash[s[i + 1]]) {
            ans += hash[s[i]];
            ++i;
        }else{
            ans += (hash[s[i + 1]] - hash[s[i]]);
            i += 2;
        }
    }
    std::cout << ans << '\n';
    return 0;
}