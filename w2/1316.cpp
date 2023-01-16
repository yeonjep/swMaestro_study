#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool find(char ch, vector<char>& v) {
  for (int i = 0; i < v.size(); i++) {
    if (ch == v[i]) return true;
  }

  return false;
}

bool checkGroup(string str) {
  vector<char> v;

  for (int i = 0; i < str.length(); i++) {
    if (find(str[i], v)) {
      if (str[i] != str[i-1]) return false;
    } else {
      v.push_back(str[i]);
    }
  }

  return true;
}

int main() {
  string str;
  int n;
  int cnt = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    // cout << "\n";
    
    // cout << "string:" << str << endl;

    if (checkGroup(str)) cnt++; 
    // cout << checkGroup(str) << endl;
  }

  cout << cnt;

  return 0;
}