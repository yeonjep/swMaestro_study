/*
6131
완전제곱수

상근이는 선영이와 함께 게임을 하고 있다. 먼저, 상근이는 두 양의 정수 A와 B를 고른다. (1 ≤ B ≤ A ≤ 500) 그 다음, 선영이는 상근이가 고른 수를 맞춰야 한다.

상근이는 선영이에게 다음과 같은 힌트를 주었다.

A의 제곱은 B의 제곱보다 N만큼 커 (1 ≤ N ≤ 1,000)

위의 힌트 조건을 만족하는 A와 B 쌍의 개수를 구하는 프로그램을 작성하시오.

A*A = B*B*N

입력
첫째 줄에 N이 주어진다.

출력
상근이의 힌트 조건을 만족하는 (A,B) 쌍의 개수를 출력한다. 

구조체 생성체 재귀생성자ㄸ
*/
#include <iostream>
#include <math.h>

using namespace std;

int check(int b, int n){


    int a_2 = b*b*n;

    if((a_2%(int)sqrt(a_2)==0)&&sqrt(a_2)<=(500))
        return 1;
    if(sqrt(a_2)>=500)
        return 2;

    return 0;
}
int how_many(int n){

    int cnt = 0;

    int b=1, a_check = check(b, n);

    while(1){
        if(a_check==2)
            break;
        else if(a_check==1)
            cnt++;
        b++;
    }

    return cnt; 
}
int main(){

    int n, result;

    cin>>n;

    result = how_many(n);

    cout<<result;

    return 0;
}