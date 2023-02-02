#include <iostream>
#include <string>
using namespace std;
//발표
/*
    압축
    재귀 
*/
int s[51];// 여는 괄호랑 닫는 괄호 사이에 있는 문자의 개수 
// 50 -> 받는 문자열의 길이가 50이하라는 문제 조건 때문에 50이라는 숫자를 염두해서 배열s의 크기 설정을 하긴 했으나 
// 여기서 s배열은 s[0]과 s[1] 만 사용하기 때문에 사실상 의미 없음.  
int idx;// 0~1
int main(){

    string str; // 받은 문자열 
    int inlen; // 괄호 안에 있는 문자열의 길이 
    cin >> str;

    for(int i = str.length()-1 ; i>=0 ; i--){// 문자열 끝부터 진행 7(58)
        if(str[i]==')'){
            idx++;
            s[idx]=0;
        }
        else if(str[i]=='('){
            //routine
            inlen = s[idx];
            idx--;
        } 
        else{
            //number
            if(str[i+1]=='('){ // 숫자가 나왔는데 그 바로 다음 문자가 여는 괄호인 경우
                s[idx] += (str[i]-'0') * inlen; 
            }
            else s[idx]++; // idx=1
        }
    }
    cout << s[0] << endl;
}
