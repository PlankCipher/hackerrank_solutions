#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
  int b = -INT_MAX;
  for (int i = 0; i < arr.size() - 2; i++) {
    for (int j = 0; j < arr[i].size() - 2; j++) {
      int r1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
      int r2 = arr[i + 1][j + 1];
      int r3 = arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

      int s = r1 + r2 + r3;
      b = max(s, b);
    }
  }

  return b;
}

int main() {
  vector<vector<int>> arr(6);
  for (int i = 0; i < 6; i++) {
    arr[i].resize(6);

    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  int result = hourglassSum(arr);

  cout << result << endl;

  return 0;
}
