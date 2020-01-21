#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 50 + 5;
LL dp[maxn];

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        memset(dp, 0, sizeof(dp));
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        printf("%lld\n", dp[n]);
    }
    return 0;
}