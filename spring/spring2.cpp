#include <bits/stdc++.h>
using namespace std;
int a[100001];
int cnt = 0;
int n;
void Spring(int pos) {
    cnt++;
    if (pos + a[pos] > n - 1) {
        return;
    } else {
        Spring(pos + a[pos]);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Spring(0);
    cout << cnt << endl;
    system("pause");
    return 0;
}