#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int MAX_N = 1'000'000;
    vector<double> prefix(MAX_N + 1, 0.0);
    for (int i = 1; i <= MAX_N; ++i) {
        prefix[i] = prefix[i - 1] + 1.0 / (static_cast<double>(i) * i);
    }
//prefix是前缀和数组，prefix[k]表示1/1^2 + 1/2^2 + ... + 1/k^2的和
    int n, m;
    cout.setf(ios::fixed);//设置为定点格式输出
    cout << setprecision(5);//设置小数点后5位
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }
        if (n > m) {
            swap(n, m);
        }
        double result = prefix[m] - prefix[n - 1];
        cout << result << '\n';
    }
    return 0;
}
