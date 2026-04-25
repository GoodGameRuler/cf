#include <bits/stdc++.h>
#include <vector>

int main(void) {
    using namespace std;
    long long int n, i = 0;
    cin >> n;

    vector<long long int> vec;
    vec.resize(n + 1);
    long long max_val = n;

    for(;i < n; i++) {
        long long int num;
        cin >> num;
        if (max_val < num) {
            max_val = num;
            vec.resize(max_val + 1);
        }
        vec[num] += num;
    }

    for(i = 2; i <= max_val; i++) {
        vec[i] = max(vec[i-1], vec[i-2] + vec[i]);
    }


    cout << vec[max_val] << endl;
}
