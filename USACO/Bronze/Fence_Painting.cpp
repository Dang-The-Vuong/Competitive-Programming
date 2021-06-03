#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("paint.in");
    ofstream fout("paint.out");
    long long a, b, c, d, e, f, g, h, i, j, k, l;
    fin >> a >> b;
    fin >> c >> d;
    e = max({a,b});
    f = min({a,b});
    g = max({c,d});
    h = min({c,d});
    k = max({a,b,c,d});
    l = min({a,b,c,d});
    if(e>g) {
        if(f>g) {
            fout << (e-f)+(g-h) << endl;
        } else {
            fout << k-l << endl;
        }
    } else if(g>e) {
        if(h>e) {
            fout << (e-f)+(g-h) << endl;
        } else {
            fout << k-l << endl;
        }
    } else {
        fout << k-l << endl;
    }
    return 0;
}
