#include <iostream>
#include<vector>
#include<string>
/*
    그룹단어 체커 
*/
using namespace std;
int groupWord=0;
void cal(string str){

	int len=str.length();
	for(int i=0;i<len-2;i++){
		if(str[i]!=str[i+1]){// 바뀔때만 체크하면 됨.
			for(int j=i+2;j<len;j++)// 바로 다음것 말고 그 다음 원소부터 check
			{
				if(str[i]==str[j])
				return;  //->그룹단어가 아닐땐 함수 탈출
			}
		}
	}
	groupWord++;
}
int main() { 
	int n;                                
	string str;                                        

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> str;
        cal(str);	
	}

	cout << groupWord;
}
