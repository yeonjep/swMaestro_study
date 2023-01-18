#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> container;
	int n;
	
	cin >> n;
	
	while(n--){
		string str;
		cin >> str;
		
		if(str=="push_front"){
			int X;
			cin >> X;
			container.push_front(X);
		}
		
		else if(str=="push_back"){
			int X;
			cin >> X;
			container.push_back(X);
		}
		
		else if(str=="pop_front"){
			if(!container.empty()){
				cout << container.front() <<"\n";
				container.pop_front();
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="pop_back"){
			if(!container.empty()){
				cout << container.back()<<"\n";
				container.pop_back();
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