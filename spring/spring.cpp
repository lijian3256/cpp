#include <bits/stdc++.h>
using namespace std;
int result = 0;
int n = 0;
int a[100001];
void Spring(int pos) {
    result ++;
    if (pos + a[pos] > n - 1) {
        return;
    } else {
        Spring(pos + a[pos]);
    }
}
int main(int argc, char const *argv[]) {
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    
    for (int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    Spring(0);
    printf("%d", result);
    system("pause");
    return 0;
}
