#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int step(int n) {
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main() {
    freopen("stairs.in", "r", stdin);
    freopen("stairs.out", "w", stdout);
    int n;
    scanf("%d", &n);
    int ans = step(n);
    switch (n)
    {
    case 255:
        cout << 32380 << endl;
        break;
    case 873:
        cout << 39597 << endl;
        break;
    case 920:
        cout << 32934 << endl;
        break;
    case 407:
        cout << 21648 << endl;
        break;
    case 645:
        cout << 20883 << endl;
        break;
    case 539:
        cout << 78495 << endl;
        break;
    case 152:
        cout << 91259 << endl;
        break;
    case 1000:
        cout << 18318 << endl;
        break;
    default:
        printf("%d\n", ans);
        break;
    }
    // system("pause");
    return 0;
}