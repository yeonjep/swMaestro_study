/*
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력

첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력

첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

ABCDEFGHIJKLMNOPQRSTUVWXYZ

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){

string arr;

cin>>arr;

int num[26] = {0};

for(int i = 0; i < arr.length(); i++){

    if(arr[i]>=65 && arr[i]<=90)
        num[arr[i]-65]++;
    else
        num[arr[i]-97]++;
}

int cnt = 0;
int max_num = 0;
int max = num[max_num];

for(int i = 1; i < 26; i++){
    if(num[i]>=num[max_num])
        max_num = i;
}

for(int i = 0; i < 26; i++){
    if(num[i]==num[max_num])
        cnt++;
}

if(cnt>1)  
    cout<<"?";
else
    cout<<(char)(65+max_num);


    return 0;
}