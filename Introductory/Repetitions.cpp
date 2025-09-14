#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt = 1;
    int ans = 1;
    for (int i = 0; i < (int)s.size(); i++) {
        while (i+1 < (int)s.size() && s[i]==s[i+1]) {
            cnt++;
            i++;
        }
        ans = max(ans,cnt);
        cnt = 1;
    }
    cout << ans << '\n';
    return 0;
}
