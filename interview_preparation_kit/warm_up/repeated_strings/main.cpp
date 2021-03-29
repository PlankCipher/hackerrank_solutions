#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
  vector<int> fa(s.size());

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a') {
      fa[i] = fa[i - 1] + 1;
    } else {
      fa[i] = fa[i - 1];
    }
  }

  long ff = (fa[s.size() - 1] * (n / s.size())) +
            (n % s.size() ? fa[n % s.size() - 1] : 0);

  return ff;
}

int main() {
  string s;
  getline(cin, s);

  long n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  long result = repeatedString(s, n);

  cout << result << endl;

  return 0;
}
