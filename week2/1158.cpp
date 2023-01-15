#include <iostream>
#include <queue>
using namespace std;
int n,k;
queue<int>people;
int main() {

	cin >> n>> k;
	cout << "<";

	for (int i = 1; i < n+1; i++)// n명 큐에 넣어주기
	people.push(i);

	while (1) {

		if(people.size()==1)
			break;
		for (int i = 1; i < k; i++) {
			people.push(people.front());// 맨 앞 사람을 뒤로 넣는다.
			people.pop(); //빼기 
		}
		cout << people.front() << ", "; // k번째 사람만 출력
		people.pop();
	}
	cout << people.front() << ">";

	return 0;
}
