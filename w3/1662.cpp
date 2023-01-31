#include <iostream>
#include <string>
#include <stack>
using namespace std;

// int parse(string str) {
//   int i;
//   stack<char> stk;
//   int cnt = 0;
//   int tmp;

//   for (i = 0; i < str.length(); i++) {
//     if (str[i] == ')') {
//       cout << "got ): cnt = " << cnt << endl;
//       tmp = 0;
//       while (stk.top() != '(') {
//         tmp++;
//         stk.pop();
//       }
//       stk.pop(); // pop (
//       tmp *= stk.top() - '0'; 
//       stk.pop(); // pop multiplier
//       cnt += tmp;
//       cout << "end ): cnt = " << cnt << ", tmp = " << tmp << endl;
//     } else {
//       stk.push(str[i]);
//     }
//   }

//   while (!stk.empty()) {
//     stk.pop();
//     cnt++;
//   }

//   return cnt;
// }

bool visited[100];

int recur(string str, int idx) {
  int cnt = 0;

  for (int i = idx; i < str.length(); i++) {
      if (visited[i]) continue;
      
      if (str[i] == '(') {
        visited[i] = true;
        int multiplier = str[i - 1] - '0';
        cnt--; // multiplier 제외
        cnt += multiplier * recur(str, i + 1);
      } else if (str[i] == ')') {
        visited[i] = true;
        return cnt;
      } else {
        visited[i] = true;
        cnt++;
      }
    
  }

  return cnt;
}

int main() {
  string str;
  cin >> str;

  cout << recur(str, 0);

  return 0;
}