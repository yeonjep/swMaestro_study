/*
입력
첫 번째 줄에는 민균이가 제시한 카드의 개수 N (1 ≤ N ≤ 1,000)이 주어진다. 

두 번째 줄에는 민균이가 제시한 카드 N개에 들어있는 정수가 공백(빈 칸)으로 구분되어 주어진다.

각 정수는 1 이상 100,000,000 이하의 자연수이다.

출력
준민이가 제시할 수 있는 수열의 원소의 최대 개수를 출력한다.
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, max = 0, count = 0, temp = 0;

    cin>>n;

    vector<int> num(n);

    for(int i =0; i<n; i++)
        cin>>num[i];

    for(int j = 0; j<n-1; j++){
        temp = 1;
        max = num[j];
        for(int k =j+1; k<n; k++){
            if(max<num[k]){
                max = num[k];
                temp++;
            }
        }
        count = count<temp?temp:count;
    }

    cout<<count;

    return 0;
}