#include <iostream>
#include <string.h>
#include <sstream>
#include <deque>

using namespace std;

int main() {
  int n;
  char cline[100];
  string line;
  char del[10] = " _";
  char* tok;
  int val;
  deque<int> dq;

  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++) {
    getline(cin, line);
    strcpy(cline, line.c_str());

    tok = strtok(cline, del);
    if (!strcmp(tok, "push")) {
      tok = strtok(NULL, del);
      if (!strcmp(tok, "front")) {
        tok = strtok(NULL, del);
        val = stoi(tok);
        dq.push_front(val);
      } else {
        tok = strtok(NULL, del);
        val = stoi(tok);
        dq.push_back(val);
      }
    } else if (!strcmp(tok, "pop")) {
      if (!strcmp(tok, "front")) {
        dq.pop_front();
      } else {
        dq.pop_back();
      }
    } else if (!strcmp(tok, "size")) {
      cout << dq.size() << endl;
    } else if (!strcmp(tok, "empty")) {
      cout << (dq.empty() ? 1 : 0) << endl;
    } else if (!strcmp(tok, "front")) {
      cout << dq.front() << endl;
    } else if (!strcmp(tok, "back")) {
      cout << dq.back() << endl;
    }
  }

  return 0;
}