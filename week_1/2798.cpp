/*

입력
첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다. 둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는 양의 정수이다.

합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.

출력
첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.

*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int blackjack(int a, int b){

    int max = 0;
    int sum = 0;
    for(int i = 0; i < a-2; i++){
        for(int j = i + 1; j< a-1; j++){
            for(int k =j+1; k<a; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum>=max && sum<=b){
                    max = sum;
                }
            }
        }
    }


    return max;
}
int main(){

    int n, m;

    cin>>n>>m;

    arr.resize(n);

    int num;
    for(int i = 0; i < n; i++){
        cin>>num;
        arr[i]=num;
    }

    //printf("%d", blackjack(n, m));
    cout<<blackjack(n, m);


    return 0;
}