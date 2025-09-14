#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n-1);
    long long total = (1LL*n*(n+1))/2; // made mistake here should use 1LL so there will no overflow 
    long long sum = 0;
    for (auto &i : a) {
        cin >> i; 
        sum += i;
    }
    long long ans = total-sum;
    cout << ans << '\n';
    return 0;
}
