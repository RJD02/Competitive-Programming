#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> pos_a, pos_c;
    if(a == b) {
        cout << "Yes" << endl;
        return;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == 'a') pos_a.push_back(i);
        if(a[i] == 'c') pos_c.push_back(i);
    }

    for(int i = 0; i < pos_a.size(); i++) {
        for(int j = 0; j < pos_c.size(); j++) {
            int posa = pos_a[i];
            int posc = pos_c[j];
            string c = a;
            char temp = c[posa];
            c[posa] = c[posc];
            c[posc] = temp;
            cout << c << endl;
            if(b == c) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
