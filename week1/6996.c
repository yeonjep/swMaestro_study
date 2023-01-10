#include <stdio.h>
#include <string.h>
#define MAX 100
/* 백준 6996_애너그램
    두 단어 A와 B가 주어졌을 때, A에 속하는 알파벳의 순서를 바꾸어서 B를 만들 수 있다면, A와 B를 애너그램이라고 한다.
    두 단어가 애너그램인지 아닌지 구하는 프로그램을 작성하시오.
    * 단어는 소문자로만 이루어져 있다. 
*/
int cnt,len;
int comp1[26],comp2[26];
char str1[100], str2[100];
char array1[MAX][MAX];
char array2[MAX][MAX];
int tag[100];
int n;

//발표
void cal(char* str, int* comp) { // 에너그램 테스트 함수 

	for(int i=0;i<26;i++) // 초기화
		comp[i]=0;
	
	len = strlen(str); 
    for (int j = 0; j < len; j++)
        comp[str[j]-'a']++; // 단어는 모두 소문자이므로 아스키코드를 사용하여 comp[0] ~ comp[26]로 횟수 count
    
}
int main() {
	
	scanf("%d", &n); // 테스트 케이스의 개수 

	for (int i = 0; i < n; i++) { // 에너그램 테스트를 할 두개의 문자열 입력
		scanf("%s %s", str1, str2); 
		
		cal(str1, comp1);
		cal(str2, comp2);

		for (int j = 0; j < 26; j++){
			if (comp1[j] != comp2[j]){ // 에너그램이 아닌 case 판별
				strcpy(array1[i],str1);
				strcpy(array2[i],str2);
				tag[i]=1;
				break;
			}
		}
		if (tag[i] == 0) {
			strcpy(array1[i],str1);
			strcpy(array2[i],str2);
		}
	}
	
	for(int i=0;i<n;i++){
		if(tag[i]==0)
			printf("%s & %s are anagrams.\n",array1[i],array2[i]);
		else if(tag[i]==1)
			printf("%s & %s are NOT anagrams.\n",array1[i],array2[i]);
		
	}
}
