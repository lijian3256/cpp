
/*
这道题算是道老题, 想想第一次做的时候, 好不容易想出来的,
当时也感觉真正的dp入门了.
现在做却还是有一点波折.
首先是拆分过程, 定义子状态:
    从 A 开始传, 第 m 次传到 A , 那么只能从 A 的左边和右边传过去.
    现在定义状态 dp[m, 0] 为传了 m 次传到 A 的方法数,
    状态转移方程为 dp[m, 0] = dp[m - 1, 1] + dp[m - 1, (0 - 1) % n]
    dp[m - 1, 1] 表示 传了 m - 1 次, 传到 1 的方法数
    dp[m - 1, (0 - 1) % n] 表示 传了 m - 1 次, 传到 (0 - 1) % n的方法数
    
    取余的目的是将这些人围成一个环
*/
/*
这次做, 让我知道通过状态转移方程的做法与记忆化搜索的时间有很大差异
以下两个代码为第一次过的两个代码
*/
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 35;
int dp[MAXN][MAXN];
int N, M;
int rec(int m, int pos)
{
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    if(dp[m][pos] != -1)
        return dp[m][pos];
    int res;
    if(m == 0 && pos == 1)
        res = 1;
    else if(m == 0)
        res = 0;
    else if(pos == 1)
        res = rec(m - 1, 2) + rec(m - 1, N);
    else if(pos == N)
        res = rec(m - 1, 1) + rec(m - 1, N - 1);
    else
        res = rec(m - 1, pos - 1) + rec(m - 1, pos + 1);
    
    return dp[m][pos] = res;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> N >> M;
    int ans = rec(M, 1);
    cout << ans << endl;
    printf;
    // system("pause");
    return 0;
}