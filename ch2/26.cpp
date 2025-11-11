#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int abc = 123; abc <= 987; ++abc) {
        int def = 2 * abc;
        int ghi = 3 * abc;
        if (def > 987 || ghi > 987) {
            continue;
        }
        string digits = to_string(abc) + to_string(def) + to_string(ghi);
        if (digits.size() != 9) {
            continue;
        }//不是三个三位数不要
        bool used[10] = {false};
        bool ok = true;
        for (char ch : digits) {//循环判断每一位数字
            int d = ch - '0';
            if (d == 0 || used[d]) {
                ok = false;
                break;
            }//如果数字是0或者已经使用过，标记为不合法并跳出循环
            used[d] = true;
        }
        if (ok) {
            cout << abc << ' ' << def << ' ' << ghi << '\n';
        }
    }
    return 0;
}
