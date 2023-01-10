#include <stdio.h>
#include <string.h>
#include<math.h>
#define MAX 100
int n,res;
int arr[100],sum[100];
int g;
void measure(int n){
    g=0;
    for(int i=1;i<=n;i++){
        if((n % i)==0){//약수이면 배열 arr에 저장한다. 
            arr[g]=i;
            g++;// 마지막에 한번 더 됨.
        }
    }
}
int k,t;
void cal(int n){
    for(int i=0;i<100;i++)
        arr[i]=0;
    t=0;
    measure(n);
    // arr - 약수
    for(int i=0;i<g-1;i++)
        sum[k]+=arr[i]; 
    
    if(n==sum[k]){ // 합이 n과 같으면

        printf("%d = ",sum[k]);
        while(1){
            printf("%d ",arr[t]); t++;
            if(arr[t+1]>0)
                printf("+ ");
            else if(arr[t+1]==0){
                printf("\n");
                break;
            }
        }
    }   
    else if(n!=sum[k]){ // n과 합이 같지 않을 때
        printf("%d is NOT perfect.\n",n);
    }
    k++;
}

int main(void){
    while(1){
        scanf("%d",&n);
        if(n==-1)
            break;
        cal(n);
    }
   
    return 0;
}
