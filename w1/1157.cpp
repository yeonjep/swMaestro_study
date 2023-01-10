#include <iostream>
#include <string>
#include <map>

using namespace std;


void toUpperCase(string& str) {
  for (int i = 0; i < str.length(); i++) {
    if ('a' <= str[i] && 'z' >= str[i]) {
      str[i] -= 'a' - 'A';
    }
  }
}

void addCh(map<char, int>& m, char ch) {
  // if NOT found -> Insert, else increase count 
  if(m.find(ch) == m.end()) {
    m.insert(pair<char, int>(ch, 1));
  } else {
    m[ch] += 1;
  }
}

char findKeyWithMaxVal(map<char, int>& m) {
  char maxKey;

  for (auto iter = m.begin(); iter != m.end(); iter++) {
    if (iter->second > m[maxKey]) 
      maxKey = iter->first;
  }

  return maxKey;
}

int main() {
  string str;
  map<char, int> m;
  int i;
  char maxKey;
  int maxVal;

  cin >> str;
  toUpperCase(str);

  for (i = 0; i < str.length(); i++) {
    addCh(m, str[i]);
  }

  maxKey = findKeyWithMaxVal(m);
  maxVal = m[maxKey];
  m.erase(maxKey);

  maxKey = maxVal == m[findKeyWithMaxVal(m)] ? '?' : maxKey;
  cout << maxKey;
  
  return 0;
}
