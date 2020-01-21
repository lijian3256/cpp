#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 9;
const int inf = 1000000000;

int f[N][N][N];

int main() {
    // freopen("more.in", "r", stdin);
    // freopen("more.out", "w", stdout);
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 0; i <= x; i ++) {
        for (int j = 0; j <= y; j ++) {
            for (int k = 0; k <= z; k ++) {
                cin >> f[i][j][k];
            }
        }
    }
    for (int i = 0; i <= x; i ++) {
        for (int j = 0; j <= y; j ++) {
            for (int k = 0; k <= z; k ++) {
                int mi = inf;
                if (i != 0) {
                    mi = min(mi, f[i - 1][j][k]);
                }
                if (j != 0) {
                    mi = min(mi, f[i][j - 1][k]);
                }
                if (k != 0) {
                    mi = min(mi, f[i][j][k - 1]);
                }
                if (mi != inf) {
                    f[i][j][k] += mi;
                }
            }
        }
    }
    cout << f[x][y][z] << endl;
    system("pause");
    return 0;
}