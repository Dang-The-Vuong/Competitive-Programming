#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int k, n, w, t;
    t = 0;
    cin >> k >> n >> w;
    for(int i = 1; i<=w; i++) {
        t = t+(k*i);
    }
    if(t<n) {
        cout << 0 << endl;
    } else {
        cout << t-n << endl;
    }
    return 0;
}
