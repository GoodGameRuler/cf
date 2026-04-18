#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>

int main() {
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int nel;
        cin >> nel;

        vector<int> arr = {};
        arr.resize(nel);
        unordered_set<int> num_set = {};
        num_set.reserve(nel);

        for(int j = 0; j < nel; i++) {
            cin >> arr[i];
            num_set.insert(arr[i]);
        }


        int out = 1;
        if (num_set.size() == nel) {
            sort(arr.begin(), arr.end(), greater<int>());
            out = -1;
        }

        for(auto el : arr) {
            cout << el << " ";
        }

        cout << "\n" << out << endl;
    }
}
