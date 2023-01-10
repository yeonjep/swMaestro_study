#include <iostream>
using namespace std;

int main() {
  int a, b;
  int n;
  int cnt = 0;

  cin >> n;

  for (a = 1; a <= 500; a++) {
    for (b = 1; b <= 500; b++) {
      if (a * a == b * b + n)
        cnt++;
    }
  }

  cout << cnt;
  return 0;
}
