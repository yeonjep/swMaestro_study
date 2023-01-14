/*
2798

틀림

입력
첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다. 둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는 양의 정수이다.

합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.

출력
첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n, m;

    cin>>n>>m;

    vector<int> card(n);

    for(int i = 0; i<n; i++){
        cin>>card[i];
    }

    sort(card.begin(), card.end());

    int max = 0, temp = 0;

    for(int i = 0; i<n-2; i++){
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k<n; k++){
                temp = card[i]+card[j]+card[k];
                if((max<temp) && (temp<=m))
                    max = temp;
                //else
                    //break;
            }
        }
    }

    cout<<max;

    return 0;
}