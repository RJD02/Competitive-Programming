#include <iostream>
using namespace std;

void solve() {
    int w, b;
    cin >> w >> b;
    if(w % 6 == 0 and b % 6 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}


int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
