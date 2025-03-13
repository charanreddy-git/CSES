#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

int mulmod(int a, int b, int m) {
    return ((a % m) * (b % m)) % m;
}

int binpow(int a, int b, int m) {
    int res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1)
            res = mulmod(res, a, m);
        a = mulmod(a, a, m);
        b >>= 1;
    }
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while(tt--){
        int a, b, c;
        cin >> a >> b >> c;
        int expo = binpow(b, c, mod - 1);
        int ans = binpow(a, expo, mod);
        cout << ans << '\n';
    }
    return 0;
}
