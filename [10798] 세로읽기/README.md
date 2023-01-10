# [10798] 세로읽기 (C언어)

## Algorithm
1. 구현  
2. 문자열

## Logic
```
word = (char **)malloc(sizeof(char *) * n);
for (i = 0; i < n; i++) {
    word[i] = (char *)malloc(sizeof(char) * (SIZE + 1));
}
```
동적할당으로 단어 저장  
  
```
for (j = 0; j < SIZE; j++) {
    for (i = 0; i < n; i++) {
        printf("%c", word[i][j]);
    }
}
```
결과 출력시 인덱스를 열행으로 읽으며 출력

## Review
생각보다 단순한 문제
