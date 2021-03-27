#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n, q;

  cin >> n >> q;

  vector<vector<int>> ks{};
  for (int i = 0; i < n; i++) {
    int kn;
    cin >> kn;

    vector<int> k{};
    for (int j = 0; j < kn; j++) {
      int kj;
      cin >> kj;
      k.push_back(kj);
    }

    ks.push_back(k);
  }

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;

    cout << ks[a][b] << endl;
  }

  return 0;
}
