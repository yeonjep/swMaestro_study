#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;

void dfs(vector<int> v, int target, int idx, int sum) {
  if (idx == v.size()) return;
  if (sum + v[idx] == target) cnt++; // 공집합 배제?

  dfs(v, target, idx + 1, sum);
  dfs(v, target, idx + 1, sum + v[idx]);
}

int main() {
  int n, target;
  int i, j, k;
  int tmp;
  vector<int> v;
  
  ios::sync_with_stdio(0);
	cin.tie(0);
  cin >> n >> target;

  for (i = 0; i < n; i++) {
    cin >> tmp;
    v.push_back(tmp);
  }

  dfs(v, target, 0, 0);

  cout << cnt;
  return 0;
}