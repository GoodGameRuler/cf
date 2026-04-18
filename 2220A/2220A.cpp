#include <bits/stdc++.h>

int main() {
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int nel;
        cin >> nel;
        // cout << "nel: " << nel << endl;

        vector<int> arr = {};
        arr.resize(nel);
        unordered_set<int> num_set = {};
        num_set.reserve(nel);

        for(int j = 0; j < nel; j++) {
            cin >> arr[j];
            num_set.insert(arr[j]);
        }

        if (num_set.size() == nel) {
            sort(arr.begin(), arr.end(), greater<int>());

            for(auto &el : arr) {
                cout << el << " ";
            }
        } else {
            cout << -1;
        }

        cout << endl;
    }
}
