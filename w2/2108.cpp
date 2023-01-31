#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

void pushItemToFreqTable(map<int, int> &m, int item) {
  if (m.find(item) == m.end()) {
    m.insert(pair<int, int>(item, 1));
  } else {
    m[item] += 1;
  }
}

int getMaxKey(map<int, int> m) {
  int maxKey = m.begin()->first;
  for (auto iter : m) {
    if (iter.second > m[maxKey])
      maxKey = iter.first;
  }

  return maxKey;
}

bool checkDoubleMode(map<int, int> m, int maxKey) {
  int maxValue = m[maxKey];
  int newMaxKey;

  m.erase(maxKey);
  newMaxKey = getMaxKey(m);

  return m[newMaxKey] == maxValue; 
}

int main() {
  int n;
  vector<int> v;
  map<int, int> m;
  int i, tmp;
  int sum = 0;
  float arith;
  int med, range, mode;
  int maxKey;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> tmp;
    v.push_back(tmp);
    sum += tmp;
    pushItemToFreqTable(m, tmp);
  }

  // 산술평균
  arith = sum / (float)n;

  // 중앙값
  sort(v.begin(), v.end());
  med = v[(n - 1) / 2];

  // 범위
  range = *(v.end() - 1) - *(v.begin());

  // 최빈값
  maxKey = getMaxKey(m);
  if (checkDoubleMode(m, maxKey)) {
    m.erase(maxKey);

    mode = getMaxKey(m);
  } else {
    mode = maxKey;
  }

  cout << floor(arith + 0.5) << endl;
  cout << med << endl;
  cout << mode << endl;
  cout << range;
  
  return 0;
}