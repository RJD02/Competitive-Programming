#include "iostream"
using namespace std;

void solve()  {
    int n;
    cin >> n;
    int count = 0;
    char currChar = '#';
    for(int i = 0; i < 2 * n; i++) {
        for(int j = 0; j < 2 * n; j+=2) {
            cout << currChar << currChar;
            currChar = currChar == '#' ? '.' : '#';
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

