#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX 100
/* 백준 2798_블랙잭
    블랙잭 : 카드의 합이 21을 넘지 않는 한도 내에서 합을 최대한 크게 만드는 게임.

    딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓고 숫자 M을 크게 외친다.
    플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 고름(카드의 합은 <= M)

    입력 : 카드의 개수 N( 3 <= N <= 100) M( 10 <= M <= 300,000)
          카드에 쓰여있는 수 

    출력 : M을 넘지 않으면서 최대한 M에 가까운 카드 3장의 합 
         
*/
int num[100];
int max, sum;
int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",& num[i]);
    }
    //algorithm - nC3
    
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                sum=num[i]+num[j]+num[k];
                if((sum<=M)&&(sum>max))
                max=sum;
            }
        }
    }
    printf("%d\n",max);

    return 0;
}
