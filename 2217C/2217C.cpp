#include <bits/stdc++.h>

int main() {
    using namespace std;

    int t;
    cin >> t;

    while(t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        cout << ((gcd(n,a)==1 && gcd(m,b)==1 && gcd(n,m)<=2) ? "YES" : "NO") << endl;
    }
}
