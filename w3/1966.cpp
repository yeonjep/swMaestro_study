#include <iostream>
#include <queue>
using namespace std;

int main() {
  priority_queue<int> pq;
  queue<pair<int, int>> q;
  int n, target;
  int priority;
  int i;
  int printSeq;
  int tcCase;

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> tcCase;

  for (int tcIdx = 0; tcIdx < tcCase; tcIdx++) {
    printSeq = 0;
    cin >> n >> target;

    for (i = 0; i < n; i++) {
      cin >> priority;
      q.push({i, priority});
      pq.push(priority);
    }

    while (!q.empty()) {
      i = q.front().first;
      priority = q.front().second;
      q.pop();

      if (pq.top() != priority) { // 현재 Queue의 가장 앞에 있는 문서의 ‘중요도’를 확인한다.
        // 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면, 이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치 한다.
        q.push({i, priority});
      } else {
        // 그렇지 않다면 바로 인쇄를 한다. => pq, q에서 제거한다
        pq.pop();
        printSeq++;
        if (target == i) {
          cout << printSeq << "\n";
        }
      }
    }
  }


  return 0;
}
