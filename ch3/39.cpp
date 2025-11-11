#include <iostream>
#include <string>

using namespace std;
//巧妙的双指针.
int main() {
    string s, t;
    if (!(cin >> s >> t)) {
        return 0;
    }

    size_t i = 0;
    for (char c : t) {
        if (i < s.size() && s[i] == c) {
            i++;
        }
    }

    cout << (i == s.size() ? "Yes" : "No") << '\n';
    return 0;
}
