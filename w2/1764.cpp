#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// bool find(vector<string> v, string item) {
//   for (int i = 0; i < v.size(); i++) {
//     if (v[i].compare(item) == 0)
//       return true;
//   }

//   return false;
// }

int main() {
  int n, m;
  int i, cnt = 0;
  string tmp;
  vector<string> bodo, res;
  map<string, bool> map;

  cin >> n >> m;

  for (i = 0; i < n; i++) {
    cin >> tmp;
    map.insert(pair<string, bool>(tmp, true));
  }
  for (i = 0; i < m; i++) {
    cin >> tmp;
    bodo.push_back(tmp);
  }

  for (i = 0; i < m; i++) {
    if (map[bodo[i]]) {
      res.push_back(bodo[i]);
      // cout << "found!!" << bodo[i] << endl;
      cnt++;
    }
  }

  cout << cnt << endl;
  sort(res.begin(), res.end());
  for (i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }
  return 0;
}