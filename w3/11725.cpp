#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  vector<vector<int>> g;
  int parent[100001];
	int n, j, k;
  ios::sync_with_stdio(false); // 없으면 시간 초과
  cin.tie(NULL);

	cin >> n;

  g.assign(n + 1, vector<int>());
  // Adjcent List 만들기
	for (int i = 0; i < n - 1; i++) {
		cin >> j >> k;
		g[j].push_back(k);
		g[k].push_back(j);
	}

  // parent 노드 배열 초기화 -> isVisited 대신 parent가 -1인 걸로 방문하지 않은 걸 알 수 있음
	for (int i = 1; i <= n; i++)
		parent[i] = -1;

  // BFS
  /*
  처음: 하나 넣어놓고 시작
  다음부터: 하나 뽑아내고(+프린트, visited) 인접한 노드 다 queue에 push
  */
	queue<int> q;
	q.push(1);
	parent[1] = 1;
	while (!q.empty()) {
		int popped = q.front();
		q.pop();

    int SIZE = g[popped].size();
		for (int i = 0; i < SIZE; i++) {
			int adj = g[popped][i];
			if (parent[adj] == -1) { // visited X -> parent 넣고 push
				parent[adj] = popped;
				q.push(adj);
			}
		}
	}

	for (int i = 2; i <= n; i++)
		cout << parent[i] << "\n";
  
	return 0;
}