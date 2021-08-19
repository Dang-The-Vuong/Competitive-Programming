#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x = 0; int xi; string n;
    cin >> xi;
    for(int i = 0; i<xi; i++) {
        cin >> n;
        if(n == "X++" or n == "++X") {
            x=x+1;
        } if(n == "X--" or n == "--X") {
            x=x-1;
        }
    }
    cout << x << "\n";
    return 0;
}