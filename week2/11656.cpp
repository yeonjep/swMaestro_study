#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <queue>
using namespace std;
/* 발표
    접미사 배열
    문자열의 길이만큼 접미사가 있음.
    substr()사용,sorting 후 벡터에 저장 후 출력하기
*/
vector<string>words;
int main(){

    string s;

    cin>>s; // 문자열 입력 
    int len = s.length();
    
    for(int i=0;i<len;i++) // 문자열 자르기, vector 저장
        words.push_back(s.substr(i,len));

    sort(words.begin(),words.end()); // 정렬
    
    for(int i=0;i<len;i++)
        cout<<words[i]<<"\n"; // 출력

    return 0;
}
