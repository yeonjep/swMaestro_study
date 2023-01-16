#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    // cout << "i: " << i << ", " << v[i] << endl; 
  }
}

bool isDescend(vector<int> v) {
  int prev;
  // cout << "check: ";
  printVector(v);
  for (int i = 0; i < v.size(); i++) {
    if (i == 0) {
      prev = v[0];
    }
    else {
      if (prev < v[i]) {
        // cout << "wrong" << endl;
        return false;
      }
      prev = v[i];
    }
  }
  return true;
}

int main() {
  int n, m, num;
  int prev, cur, tmp;
  int i, j;
  string ans = "Yes";
  
  cin >> n >> m;
  for (i = 0; i < m; i++) {
    cin >> num;
    vector<int> v;
    for (j = 0; j < num; j++) {
      cin >> tmp;
      v.push_back(tmp);
    }
    if (!isDescend(v))
      ans = "No";
    // cout << ans << endl;
  }

  cout << ans;
  return 0;
}