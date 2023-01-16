#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
  int n;
  queue<int> q;
  string line;
  int blankIdx;

  cin >> n;

  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, line);

    if ((blankIdx = line.find(" ")) != string::npos) {
      string sub = line.substr(blankIdx + 1, 100);
      q.push(stoi(sub));
    }
    else if (!line.compare("pop")) {
      if (q.empty()) {
        cout << -1 << endl;
      } else {
        cout << q.front() << endl;
        q.pop();
      }
    } else if (!line.compare("size")) {
      cout << q.size() << endl;
    } else if (!line.compare("empty")) {
      cout << (q.empty() ? 1 : 0) << endl;
    } else if (!line.compare("front")) {
      cout << (q.empty() ? -1 : q.front()) << endl;
    } else if (!line.compare("back")) {
      cout << (q.empty() ? -1 : q.back()) << endl;
    }
  }

  return 0;
}