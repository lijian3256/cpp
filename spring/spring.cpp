#include <bits/stdc++.h>
using namespace std;
int a[100005];
int dp[100005];
int ans;
int main()
{
    // freopen("spring.in", "r", stdin);
    // freopen("spring.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--) {
        dp[i] = dp[i + a[i]] + 1; //弹出i位置比弹出i+a[i]位置所需次数多一
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    system("pause");
    return 0;
}