#include <bits/stdc++.h>
using namespace std;

long long f(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return (n * 23 + 1) / 2;
    }
}

long long find_n(long long k) {
    while (true) {
        long long n = rand() % (long long)pow(10, 103) + 1;
        vector<long long> seq = {n};
        unordered_set<string> seen = {to_string(n)};
        for (long long i = 1; i < k; i++) {
            long long fn = f(seq.back());
            seq.push_back(fn);
            string h = to_string(fn);
            if (seen.count(h) || fn == 1) {
                break;
            }
            seen.insert(h);
        }
        if (seq.size() == k && seq.back() != 1) {
            return n;
        }
    }
}

int main() {
    srand(time(NULL));
    long long k;
    cin >> k;
    cout << find_n(k) << endl;
    return 0;
}
