#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int countingValleys(int steps, string path) {
  int c = 0;
  int l = 0;
  for (int i = 0; i < path.size(); i++) {
    if (path[i] == 'D') {
      l--;
    } else {
      if (l == -1) {
        c++;
      }

      l++;
    }
  }

  return c;
}

int main() {
  string steps_temp;
  getline(cin, steps_temp);

  int steps = stoi(ltrim(rtrim(steps_temp)));

  string path;
  getline(cin, path);

  int result = countingValleys(steps, path);

  cout << result << endl;

  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
