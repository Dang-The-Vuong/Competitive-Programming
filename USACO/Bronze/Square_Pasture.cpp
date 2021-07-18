#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("square.in");
    ofstream fout("square.out");
    long long int a, b, c, d, e, f, g, h;
    fin >> a >> b >> c >> d;
    fin >> e >> f >> g >> h;
    long long int i = max({a,c,e,g}) - min({a,c,e,g});
    long long int j = max({b,d,f,h}) - min({b,d,f,h});
    long long int k = max({i,j});
    fout << k*k << endl;
    return 0;
}