# [1157] 단어 공부 (C언어)

## Algorithm
1. 구현  
2. 문자열

## Logic
```
    for (i = 0; i < length; i++) {
        if (input[i] > 'Z') {
            input[i] -= capital;
        }
        check[input[i]-'A']++;
    }
```
소문자는 대문자로 바꾸고  
알파벳 순서대로(A, B, C, ..., Z)  
배열 인덱스 맞춰서(0, 1, 2, ..., 25)  
발견 마다 배열값 1씩 증가  

```
    for (i = 0; i < ALPHABET; i++) {
        if (max == check[i])
            ans = '?';
        else if (max < check[i]) {
            max = check[i];
            ans = i + 'A';
        }
    }
```
배열 인덱스 값을 비교하여  
최대값이 여러개면 ?,  
단 하나이면 해당 인덱스에 맞는 알파벳 저장

## Review
반복문 범위에서 함수 사용은 지양하자  
함수가 계속해서 호출되어서 시간 초과 나왔다
```
    for(i=0; strlen(input); i++
```
