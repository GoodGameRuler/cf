#include <bits/stdc++.h>

int main() {
    using namespace std;

    int n;
    cin >> n;

    unordered_map<string, int> map;

    while(n--) {
        string s;
        cin >> s;

        if(map[s]++) {
            cout << s << map[s] << endl;
            continue;
        }

        cout << "OK" << endl;
    }
}
