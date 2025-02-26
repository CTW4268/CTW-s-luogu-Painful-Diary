#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, m;
    cin >> t >> m;
    if (t <= 0 || m <= 0) {
        cout << 0;
        return 0;
    }
    
    int ti[m + 1], mi[m + 1];
    for (int i = 1; i <= m; i++) {
        cin >> ti[i] >> mi[i];
    }
    
    int f[m + 1][t + 1] = {0};  // 确保全初始化为0
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= t; j++) {  // j从0开始
            if (j >= ti[i]) {
                f[i][j] = max(f[i-1][j], f[i-1][j - ti[i]] + mi[i]);
            } else {
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[m][t];
    return 0;
}