#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
/*
    카드의 개수 n, 각 카드의 숫자들을 입력(일차원 배열에) 받는다.
    부분집합 구하기.
    arr배열원소의 대소 비교 -> 순증가 조건 만족 
    가능한 원소의 개수는 변수 max 에 저장, 반복문 돌면서 update 해주기 
*/
int compare(const void *a, const void *b)
{
    if(*(int*)a<*(int*)b)
        return 1;
    else if(*(int*)a>*(int*)b)
        return -1;
    else
    return 0;
}
int N, max, num,tmp;
int arr[MAX];
int main(void){

    int maxArr[MAX]={1};  // i, j에 따라서 가능한 부분집합의 개수를 저장함.   
    
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
//* 순증가인 서로다른 부분 집합의 개수를 찾아내라 
    for(int i=1;i<N;i++){
        tmp=0;
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i]){// 순증가일때,tmp 값 update
                if (tmp < maxArr[j])
                    tmp = maxArr[j]; 
            }     
        }
        tmp++; 
        maxArr[i]=tmp;
    }
    qsort(maxArr,sizeof(maxArr)/sizeof(int),sizeof(int),compare);
    printf("%d",maxArr[0]);
  
    return 0;
}
