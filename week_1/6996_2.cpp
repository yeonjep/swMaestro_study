
/*
맞음

입력
첫째 줄에 테스트 케이스의 개수(<100)가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 100을 넘지 않는 단어가 공백으로 구분되어서 주어진다. 단어는 알파벳 소문자로만 이루어져 있다.

출력
각 테스트 케이스마다 애너그램인지 아닌지를 예체 출력과 같은 형식으로 출력한다. 

입력받고 정렬해서 비교해서 같으면 오케이

qwertyuiopasdfghjklzxcvbnm 26개
*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    int n=0;
    cin>>n;

    string A;
    string B;
    string result;

    for(int i =0; i<n; i++){
        cin>>A>>B;
        result="";
        cout<<A<<" & "<<B<<" are";
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if(A.compare(B)!=0)
            result=" NOT";

        cout<<result<<" anagrams."<<endl;

    }

    return 0;
}