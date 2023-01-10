#include <stdio.h>
#include<stdlib.h>
int N,M,i,j;
//int book_per_dummy[10000];
//int bookNum[200000];
int book_per_dummy;
int main(void){
    
    int tag=0;
    scanf("%d %d",&N,&M);// N : 책의 권수, M : 더미의 개수 

    for(int i=0;i<M;i++){
        scanf("%d",&book_per_dummy);
        int* bookNum =(int*)malloc(sizeof(int)*book_per_dummy);
        for(int j=0;j<book_per_dummy;j++)
            scanf("%d",&bookNum[j]);
    
        for(int k=0;k<book_per_dummy-1;k++){
            if(bookNum[k]<bookNum[k+1]){
                tag=1;
                break;
            }
            if(tag==1)
                break;
        }
        if(i==M-1&&tag!=1)
            printf("Yes");
    }
    if(tag==1)
        printf("No");

    return 0;
}
