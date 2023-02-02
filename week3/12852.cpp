#include <iostream>
#include<vector>
#define MAX 1000001
using namespace std;
//발표
/*
    1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
    2. X가 2로 나누어 떨어지면, 2로 나눈다.
    3. 1을 뺀다.
    ---------
    123 중 아무거나 선택해서 연산하면 안되고 
    DP를 통해 최솟값을 갱신하면서 진행해야 함. 
    
    최솟값 -> 역추적 / DP
*/
int n,path;
vector<int> dp(MAX,0);// 연산 횟수의 최솟값 저장  
vector<int> before(MAX,0); // 1로 만드는 방법에 포함되어 있는 수 출력용 (경로 저장)
//bottom up 
int main(){

    cin >> n;
    // 1-n 까지의 수를 1로 만들기 까지 연산하는 횟수의 최솟값을 dp에 미리 저장. 
    dp[1]=0; // 아직 연산을 안했을 시 -> 연산횟수 0번 
    before[1]=-1; // 이게 양수일 경우에만 출력 되도록 (출력 반복문 조건)

    for(int i=2;i<=n;i++){

        // 1을 뺀다.
        dp[i]=dp[i-1]+1; //default 연산
        before[i]=i-1; // 한단계 전의 index 저장

        // X가 2로 나누어 떨어지면, 2로 나눈다.
        if( i % 2 == 0 && dp[ i / 2 ] + 1 < dp[i] ){
            dp[i]=dp[i/2]+1;
            before[i]=i/2;
        }

        // X가 3으로 나누어 떨어지면, 3으로 나눈다.
        if(i%3==0 && dp[i/3]+1 < dp[i]){
            dp[i]=dp[i/3]+1;
            before[i]=i/3;
        }
    }

    //연산횟수 최솟값 
    cout<<dp[n]<<"\n";
    path=n;

    while(path > 0){
        cout << path << " ";
        path=before[path];
    }

}
