#include<stdio.h>
#define MAX 100
// 발표
/* 백준 2789 
    유학금지
    A,B,C,D,E,G,I,R,M 이 포함되어 있는 단어에서 해당 알파벳들은 삭제되도록 함. 

    어떤 단어가 주어졌을 때, 검열을 거친 후 어떤 단어가 되는지 결과를 출력하는 프로그램
    * 3 <= length of 주어지는 단어 <= 100
    * 주어지는 단어는 알파벳 대문자로 이루어진다.
    * 정답의 길이는 항상 0보다 크다. 
    
*/
char str[MAX];
int k,len;
int main(void){
   
    gets(str);
    len=strlen(str);
    
    for(int i=0;i<len;i++){
        if((str[i]!='C')&&(str[i]!='A')&&(str[i]!='M')&&(str[i]!='B')&&(str[i]!='R')&&(str[i]!='I')&&(str[i]!='D')&&(str[i]!='G')&&(str[i]!='E'))
            printf("%c",str[i]);
    }
    return 0;
}
