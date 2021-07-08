#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, m, n;
    b = 0;
    cin >> n;
    for(int i = 1; i<n; i++) {
        cin >> a;
        b = b+a;
    }
    m = n*(n+1)/2;
    cout << m-b << endl;
    return 0;
}