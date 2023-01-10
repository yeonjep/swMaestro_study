#include <iostream>
#include <string>
using namespace std;

int countChNum(string str, char ch) {
  int cnt = 0;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ch) cnt++;
  }
  
  return cnt;
}

int main() {
  int l, o, v, e;
  int ly, oy, vy, ey; //연두 이름의 l개수, o개수, v개수, e개수
  string name;
  int num;
  int max, maxIndex = 0, sum;

  cin >> name >> num;
  string strs[num];

  for (int i = 0; i < num; i++)
    cin >> strs[i];

  ly = countChNum(name, 'L');
  oy = countChNum(name, 'O');
  vy = countChNum(name, 'V');
  ey = countChNum(name, 'E');
  
  for (int i = 0; i < num; i++) {
    l = countChNum(strs[i], 'L') + ly;
    o = countChNum(strs[i], 'O') + oy;
    v = countChNum(strs[i], 'V') + vy;
    e = countChNum(strs[i], 'E') + ey;
    // cout << "l: " << l << endl;
    // cout << "o: " << o << endl;
    // cout << "v: " << v << endl;
    // cout << "e: " << e << endl;

    sum = ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;
    // cout << sum << endl;
    if (i == 0) max = sum;
    else {
      if (sum > max) {
        max = sum;
        maxIndex = i;
      }
      else if (sum == max) {
        maxIndex = strs[i] < strs[maxIndex] ? i : maxIndex;
      }
    }
  }

  cout << strs[maxIndex];

  return 0;
}
