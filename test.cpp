#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2005;
int a[MAXN];
int prefix[MAXN + 1];
int main() {
    int n;
    cin >> n;
    int min_p = 0;
    int max_s = INT_MIN;
    prefix[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    for (int i = 1; i <= n; i++) {
        max_s = max(max_s, prefix[i] - min_p);
        min_p = min(min_p, prefix[i]);
    }

    cout << max_s << endl;
    return 0;
}