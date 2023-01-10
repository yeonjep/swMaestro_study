#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX 100
/*
    백준 6131_완전제곱수 
    상근이가 두 양의 정수 A와 B를 고르고 (1 ≤ B ≤ A ≤ 500)
    선영이는 상근이 고른 수를 맞춰야 함.

    Hint : A의 제곱은 B의 제곱보다 N만큼 큼 (1 ≤ N ≤ 1,000)

    위의 힌트 조건을 만족시키는 A,B 쌍의 개수를 구하는 프로그램

    입력 : N
    출력 : A,B 쌍의 개수
*/
int main(){

    int N;
    int cnt=0;
    scanf("%d",&N);

    for(int A=1;A<=500;A++){
        for(int B=1;B<=A;B++){
            if((B*B+N)==A*A)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
