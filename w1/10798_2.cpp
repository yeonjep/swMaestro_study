#include <iostream>
#include <string>
using namespace std;

int main() {
  string str[5];
  int i, j;

  for (i = 0; i < 5; i++)
    cin >> str[i];

  for (i = 0; i < 15; i++) {
    for (j = 0; j < 5; j++) {
      if (i >= str[j].length()) continue;
      else cout << str[j][i];
    }
  }

  return 0;
}