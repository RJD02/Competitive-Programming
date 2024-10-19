#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int x;
    cin >> x;
    vector<int> a;
    while (x) {
        if (x & 1) {
            if ((x >> 1) & 1) {
                a.push_back(-1);
                x += 2;
            } else {
                a.push_back(1);
            }
        } else {
            a.push_back(0);
        }
        x >>= 1;
    }
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}