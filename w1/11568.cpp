#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int i, j, tmp;
  int dp[1001], max = 1;
  vector<int> v;

  cin >> n;

  // 배열 입력
  for (i = 0; i < n; i++) {
    cin >> tmp;
    v.push_back(tmp);
  }

  for (i = 0; i < n; i++) {
    dp[i] = 1;
    for (j = 0; j < i; j++) {
      if (v[j] < v[i] && dp[j] + 1 > dp[i]) {
        dp[i] = dp[j] + 1;
        if (max < dp[i]) max = dp[i];
      }
    }
  }

  cout << max;
}