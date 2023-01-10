#include <stdio.h>
#include <string.h>
#define MAX 100
int cnt,len;
int comp1[26],comp2[26];
char str1[100], str2[100];
char array1[MAX][MAX];
char array2[MAX][MAX];
int tag[100];
int n;

void cal(char* str, int* comp) {

	for(int i=0;i<26;i++){
		comp[i]=0;
	}
	len = strlen(str);
    for (int j = 0; j < len; j++)
    {
        comp[str[j]-'a']++;
    }
}
int main() {
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", str1, str2);
		
		cal(str1, comp1);
		cal(str2, comp2);
		for (int j = 0; j < 26; j++){
			if (comp1[j] != comp2[j]){
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
