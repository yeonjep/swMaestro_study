#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000000
#define NUM 26
/* 백준 1157_단어공부

    알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 뭔지 알아내는 프로그램
    (* 대문자와 소문자를 구분하지 않음.)

    입력: 길이가 <=1,000,000인 단어
    출력: 가장 많이 사용된 알파벳을 '대문자'로 출력
    (* 여러개 존재 시 -> ? 출력)
 */
char str[MAX];
int alpa[NUM];

typedef enum{
    A, B, C, D, E, F, G,
    H, I, J, K, L, M, N,
    O, P, Q, R, S, T, U,
    V, W, X, Y, Z
} ALPA;
int main(void){

    gets(str);
    char sort[NUM]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int len=strlen(str); //for문에 넣으면 시간초과 ('strlen' 함수는 입력 단어의 길이를 반환하는 함수이므로 단어의 길이에 비례하는 만큼의 시간을 소요)
    for(int i=0;i<len;i++){
    switch(str[i]){

        case 'A': case 'a':
            alpa[A]++;
            break;
        case 'B': case 'b':
            alpa[B]++;
            break;   
        case 'C': case 'c':
            alpa[C]++;
            break;
        case 'D': case 'd':
            alpa[D]++;
            break;
        case 'E': case 'e':
            alpa[E]++;
            break;
        case 'F': case 'f':
            alpa[F]++;
            break;
        case 'G': case 'g':
            alpa[G]++;
            break;
        case 'H': case 'h':
            alpa[H]++;
            break;
        case 'I': case 'i':
            alpa[I]++;
            break;
        case 'J': case 'j':
            alpa[J]++;
            break; 
        case 'K': case 'k':
            alpa[K]++;
            break;  
        case 'L': case 'l':
            alpa[L]++;
            break;
        case 'M': case 'm':
            alpa[M]++;
            break;
        case 'N': case 'n':
            alpa[N]++;
            break;
        case 'O': case 'o':
            alpa[O]++;
            break;
        case 'P': case 'p':
            alpa[P]++;
            break;
        case 'Q': case 'q':
            alpa[Q]++;
            break;
        case 'R': case 'r':
            alpa[R]++;
            break;
        case 'S': case 's':
            alpa[S]++;
            break;
        case 'T': case 't':
            alpa[T]++;
            break;
        case 'U': case 'u':
            alpa[U]++;
            break;
        case 'V': case 'v':
            alpa[V]++;
            break;
        case 'W': case 'w':
            alpa[W]++;
            break;
        case 'X': case 'x':
            alpa[X]++;
            break;
        case 'Y': case 'y':
            alpa[Y]++;
            break;
        case 'Z': case 'z':
            alpa[Z]++;
            break;
    }
    }

    int temp;
    char tmp;

    //내림차순_버블정렬
    for (int i = 0; i < NUM; i++) {
	for (int j = 0; j < (NUM - 1) - i; j++) {
		if (alpa[j] < alpa[j + 1]) {	
			temp = alpa[j];
            tmp=sort[j];
			alpa[j] = alpa[j + 1];
            sort[j] = sort[j+1];
			alpa[j + 1] = temp;
            sort[j+1]=tmp;
		}
	}
    
}
        if(alpa[0]==alpa[1])
            printf("?");
        else
            printf("%c",sort[0]);

    return 0;
}
