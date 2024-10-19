#include <iostream>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b and b < c)
    cout << "STAIR";
  else if (a < b and b > c)
    cout << "PEAK";
  else
    cout << "NONE";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
