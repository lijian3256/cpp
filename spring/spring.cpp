#include <bits/stdc++.h>
using namespace std;
int a[100001], dp[100001];
int main()
{
    // freopen("spring.in", "r", stdin);
    // freopen("spring.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = n; i >= 1; --i)
    {
        if (i + a[i] > n)
            dp[i] = 1;
    }
    int result = 1;
    for (int i = n; i >= 1; --i)
    {
        int m = i - 30 > 0 ? i - 30 : 0;//保证m不是负数并且可以m = i - 30
        for (int j = i - 1; j >= m; --j)
        {
            if (j + a[j] == i)
            {
                dp[j] = dp[i] + 1;
                result = max(dp[j], result);//找出最大值
            }
        }
    }
    printf("%d\n", result);
    // system("pause");
    return 0;
}