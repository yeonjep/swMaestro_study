// #include <iostream>
// #include <queue>
// using namespace std; 

// int main() {
//   int n;
//   queue<pair<int,int>> q; // num, sum

//   ios::sync_with_stdio(0); cin.tie(0);
//   cin >> n;

//   // BFS
//   q.push({n, 0});

//   while (!q.empty()) {
//     pair<int, int> front = q.front();
//     int num = front.first;
//     int cnt = front.second;

//     if (num == 1) {
//       cout << cnt;
//       break;
//     }

//     q.pop();

//     if (num % 3 == 0) {
//       q.push({num / 3, cnt + 1});
//     } else if (num % 2 == 0) {
//       q.push({num / 2, cnt + 1});
//     }
    
//     q.push({num - 1, cnt + 1});
//   }

//   return 0;
// }

#include <iostream>
#include <queue>
#include <stack>
using namespace std; 
bool visited[1000001] = { false };
typedef struct elem {
  int num;
  vector<int> history;
} Elem;

int main() {
  int n;
  queue<Elem> q; // num, sum

  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  if (n == 1) {
    cout << 0;
    return 0;
  }
  // BFS
  vector<int> init_v;
  init_v.push_back(n);
  q.push({n, init_v});
  visited[n] = true;

  while (!q.empty()) {
    Elem front = q.front();
    int num = front.num;
    vector<int> newHistory = front.history;

    if (num == 1) {
      cout << newHistory.size() - 1 << "\n";
      for (int i = 0; i < newHistory.size(); i++) {
        cout << newHistory[i] << " ";
      }
      return 0;
    }

    q.pop();

    if (num % 3 == 0) {
      newHistory.push_back(num / 3);
      Elem item = {num / 3, newHistory};
      q.push(item);
      newHistory.pop_back();
    } else if (num % 2 == 0) {
      newHistory.push_back(num / 2);
      Elem item = {num / 2, newHistory};
      q.push(item);
      newHistory.pop_back();
    }
    if (num > 1) {
      newHistory.push_back(num - 1);
      Elem item = {num - 1, newHistory};
      q.push(item);
      newHistory.pop_back();
    }
  }

  return 0;
}
