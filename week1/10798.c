#include <stdio.h>
/*
    영어 대문자, 영어 소문자, 숫자(0~9), 최대 길이 15
    단어는 다섯개 만듬.

    한줄 글자는 <=15
*/
char word[5][16];
char res[100];
int p,cnt;
int main(void){

    for(int i=0;i<5;i++)
        scanf("%s",word[i]);
   
    for(int i=0;;i++){// 열 증가
        cnt=0;
        for(int t=0;t<5;t++){
            if(word[t][i]!='\0')
                res[p++]=word[t][i];
            else if(word[t][i]=='\0') 
                cnt++;
        }   
        if(cnt==5) break;
    }

    printf("%s",res);
    
    return 0;
}
