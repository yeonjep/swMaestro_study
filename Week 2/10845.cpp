#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> container;
	int n;
	
	cin >> n;
	
	while(n--){
		string str;
		cin >> str;
		
		if(str=="push"){
			int X;
			cin >> X;
			container.push(X);
		}
		
		else if(str=="pop"){
			if(!container.empty()){
				cout << container.front() <<"\n";
				container.pop();
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="size"){
			cout << container.size() <<"\n";
		}
		
		else if(str=="empty"){
			cout << container.empty() <<"\n";
		}
		
		else if(str=="front"){
			if(!container.empty()){
				cout << container.front() <<"\n";
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="back"){
			if(!container.empty()){
				cout << container.back() <<"\n";
			}
			else
				cout << "-1\n";
		}
	}		
	return 0;
}