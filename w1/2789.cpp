#include <iostream>
#include <string>
using namespace std;

bool checkCambridge(char ch) {
  string cbg = "CAMBRIDGE";

  for (int i = 0; i < cbg.length(); i++) {
    if (cbg[i] == ch) return true;
  }

  return false;
}

string deleteCh(string input, int idx) {
  string rear = input.substr(idx + 1);
  string front = input.substr(0, idx); 

  return front + rear;
}

int main() {
  string str;

  cin >> str;

  const int LEN = str.length();
  for (int j = 0; j < LEN; j++) {
    if (checkCambridge(str[j])) {
      str = deleteCh(str, j);
      j--;
    }
  }

  cout << str;
  return 0;
}
