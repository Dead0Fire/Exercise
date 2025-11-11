#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        bool found = false;
        for (int n = 10; n <= 100; ++n) {
            if (n % 3 == a && n % 5 == b && n % 7 == c) {
                cout << n << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No answer" << '\n';
        }
    }
    return 0;
}
