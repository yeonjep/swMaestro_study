#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> res;
  vector<int> circle;
  int i, n, k;
  int len;
  int delIdx = 0;

  cin >> n >> k;
  len = n;

  for (i = 1; i << len; i++) {
    circle.push_back(i);
  }

  auto begin = circle.begin();
  for (i = 1; i <= n; i++) {
    delIdx = (delIdx + k) % len;
    res.push_back(circle[delIdx]);
    circle.erase(begin + delIdx);
    len--;
  }

  cout << "<";
  int size = res.size();
  for (i = 0; i < size; i++) {
    cout << res[i] << (i == size - 1 ? ">" : ", ");
  }

  return 0;
}