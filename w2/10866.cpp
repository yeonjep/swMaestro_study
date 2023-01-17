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

  for (int i = 0; i < n + 1; i++) {
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
      tok = strtok(NULL, del);
        if (!strcmp(tok, "front")) {
          if (!dq.empty()) {
            cout << dq.front() << endl;
            dq.pop_front();
          }
          else
            cout << -1 << endl;
        } else {
        if (!dq.empty()) {
          cout << dq.back() << endl;
          dq.pop_back();
        }
        else 
          cout << -1 << endl;
      }
    } else if (!strcmp(tok, "size")) {
      cout << dq.size() << endl;
    } else if (!strcmp(tok, "empty")) {
      cout << (dq.empty() ? 1 : 0) << endl;
    } else if (!strcmp(tok, "front")) {
      if (!dq.empty())
        cout << dq.front() << endl;
      else
        cout << -1 << endl;
    } else if (!strcmp(tok, "back")) {
      if (!dq.empty())
        cout << dq.back() << endl;
      else
        cout << -1 << endl;
    }
  }

  return 0;
}