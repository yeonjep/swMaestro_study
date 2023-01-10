#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  int i, j, k;
  int tmp, max = 0;
  vector<int> v;
  cin >> n >> m;

  for (i = 0; i < n; i++) {
    cin >> tmp;
    v.push_back(tmp);
  }

  // _ _ _ -> 서로 다른 숫자 3개의 합 -> i, i + 1, i + 2
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      for (k = j + 1; k < n; k++) {
        // 서로 다른 숫자의 3개의 합의 최대값 구하기
        tmp = v[i] + v[j] + v[k];
        if (tmp > m) continue; // 주어진 숫자보다 클 경우 최대값 X
        if (tmp > max) max = tmp;
      }
    }
  }

  cout << max;

  return 0;
}
