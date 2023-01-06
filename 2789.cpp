/*
백준 2789
유학금지

어떤 단어가 주어졌을 때, 검열을 거친 후에는 어떤 단어가 되는지 구하는 프로그램

입력
첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 이 단어는 적어도 3글자이며, 많아야 100글자이다.

출력
입력으로 주어진 단어를 정부가 검열을 하면 어떻게 변하는지를 출력한다. 즉, 단어에서 CAMBRIDGE에 포함된 알파벳을 모두 지운 뒤 출력한다. 항상 정답의 길이는 0보다 크다.


*/
#include <iostream>

using namespace std;

int main(){

    char arr[100];
    cin>>arr;

    char result[100] = {};
    int i = -1;

    for(int j = 0; j < sizeof(arr); j++){
        if(!(arr[j]=='C'||arr[j]=='A'||arr[j]=='M'||arr[j]=='B'||arr[j]=='R'||arr[j]=='I'||arr[j]=='D'||arr[j]=='G'||arr[j]=='E'
        )){
            i++;
            result[i] = arr[j];
        }
    }
    cout<<result;

    return 0;
}