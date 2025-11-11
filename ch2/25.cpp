#include <iostream>
using namespace std;
//注意是100位的c,必须长除法
int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;

        long long integer_part = a / b;
        long long remainder = a % b;
        int frac[105] = {0};

        for (int i = 0; i < c; ++i) {     
            remainder *= 10;
            frac[i] = remainder / b;
            remainder %= b;
        }

        remainder *= 10;                  
        int round_digit = remainder / b;

        if (round_digit >= 5) {           
            int carry = 1;
            for (int i = c - 1; i >= 0 && carry; --i) {
                int v = frac[i] + carry;
                frac[i] = v % 10;
                carry = v / 10;
            }
            if (carry) {
                ++integer_part;
            }
        }

        cout << integer_part;
        if (c > 0) {
            cout << '.';
            for (int i = 0; i < c; ++i) cout << frac[i];
        }
        cout << '\n';
    }
    return 0;
}
