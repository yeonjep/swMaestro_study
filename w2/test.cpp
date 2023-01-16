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
  map<string, bool> m;
  m.insert(pair<string, bool>("str", true));
  cout << m["str"];

  return 0;
}