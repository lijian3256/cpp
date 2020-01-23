#include <bits/stdc++.h>
using namespace std;
int a[100005];
int result = 0;
void spring(int sum) {
    result ++;
    
}
int main(int argc, char const *argv[])
{
    memset(a, 0, sizeof(a));
    freopen("spring.in", "r", stdin);
    freopen("spring.out", "w", stdout);
    scanf("%d", &argc);
    for (int i = 1; i <= argc; i ++) {
        cin >> a[i];
    }
    spring(0);
    printf("%d\n", result);
    return 0;
}
