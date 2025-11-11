#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }
        int stars = 2 * (n - i) - 1;
        for (int j = 0; j < stars; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
