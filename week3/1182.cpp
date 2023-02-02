#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

vector<int> v1;
int n, s, cnt;
// 백 트래킹 (모든 경우의 수를 탐색해야 함 & 최적화)
// dfs
// 주의 : 작은 순서대로 숫자가 주어지는 것이 아님

void backtracking(int n, int index, int temp){

    if(index==n)// 탐색 완료 조건
        return;
    if(temp+v1[index]==s) // 주어지는 숫자가 정렬되어 있지 않기 때문에 return 하면 안됨. 
        cnt++;

    backtracking(n,index+1,temp); // 현재 index의 원소를 더하지 않고 넘어가는 경우  
    backtracking(n,index+1,temp+v1[index]); // 현재 index의 원소를 더하고 넘어가는 경으 
}
int main(){

    int num;
    cin >> n >> s;  // n: 정수의 개수 , s : 합
    for(int i=0;i<n;i++){
        cin >> num;
        v1.push_back(num); // 숫자 입력 받기
    }
    backtracking(n,0,0);
    cout<<cnt;
}
