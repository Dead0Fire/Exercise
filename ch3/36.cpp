#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// 题目思路（分析过程）:
// 1. 读入 r×c 网格，'*' 表示黑格，其余为字母。
// 2. 定义起始格：若当前白格左/上为黑格或越界，则编号递增标记。
// 3. 输出 Across：枚举每行，从起始格向右收集直到黑格或边界。
// 4. 输出 Down：枚举每列，从起始格向下收集直到黑格或边界。
// 5. 多组数据之间按 UVA232 的格式打印 puzzle #n。

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    int puzzleIndex = 1;
    while (cin >> r >> c) {
        if (r == 0 && c == 0) {
            break;
        }

        vector<string> grid(r);
        for (auto& row : grid) {
            cin >> row;
        }

        vector<vector<int>> id(r, vector<int>(c, 0));
        int counter = 1;//用于标记起始格编号
        for (int row = 0; row < r; ++row) {
            for (int col = 0; col < c; ++col) {
                if (grid[row][col] == '*') {
                    continue;
                }
                bool left_blocked = (col == 0) || grid[row][col - 1] == '*';
                bool top_blocked = (row == 0) || grid[row - 1][col] == '*';
                if (left_blocked || top_blocked) {
                    id[row][col] = counter++;
                }
            }
        }

        if (puzzleIndex > 1) {
            cout << "\n";
        }
        cout << "puzzle #" << puzzleIndex++ << ":\n";

        cout << "Across\n";
        for (int row = 0; row < r; ++row) {
            for (int col = 0; col < c; ++col) {
                if (grid[row][col] == '*') {
                    continue;
                }
                bool left_blocked = (col == 0) || grid[row][col - 1] == '*';
                if (left_blocked) {
                    cout << setw(3) << id[row][col] << ".";
                    int cur = col;
                    while (cur < c && grid[row][cur] != '*') {
                        cout << grid[row][cur];
                        ++cur;
                    }
                    cout << "\n";
                }
            }
        }

        cout << "Down\n";
        for (int col = 0; col < c; ++col) {
            for (int row = 0; row < r; ++row) {
                if (grid[row][col] == '*') {
                    continue;
                }
                bool top_blocked = (row == 0) || grid[row - 1][col] == '*';
                if (top_blocked) {
                    cout << setw(3) << id[row][col] << ".";
                    int cur = row;
                    while (cur < r && grid[cur][col] != '*') {
                        cout << grid[cur][col];
                        ++cur;
                    }
                    cout << "\n";
                }
            }
        }
    }

    return 0;
}
