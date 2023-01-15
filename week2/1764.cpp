#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
/*
    듣보잡
    들어보지 못한 사람의 수 : n
    본적 없는 사람의 수 : m
     
    두 명단에서 겹치는 이름을 세서 그 수와 명단을 '사전순'으로 출력한다. 
    
    solution : 한번에 다 받아서 정렬 / i, i+1 이 같은 경우 출력해주기

*/
vector<string> v1,v2;
string name;
int main(){

    int n,m,cnt=0;
    cin >> n >> m;
    //듣도 못한 사람
    for(int i=0;i<n;i++){
        cin >> name;
        v1.push_back(name);
    }
    //보도 못한 사람
    for(int i=0;i<m;i++){
        cin >> name;
        v1.push_back(name);
    }
    // 정렬
    sort(v1.begin(),v1.end());

    for(int i=0;i<n+m-1;i++){
        if(v1[i]==v1[i+1]){
            cnt++;
            v2.push_back(v1[i]);
        }
    }
    // 듣보잡 명수 출력
    cout<<cnt<<"\n";
    // 듣보잡 이름 출력
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<"\n";

    return 0;
}
