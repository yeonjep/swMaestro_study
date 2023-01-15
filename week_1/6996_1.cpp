
/*
입력
첫째 줄에 테스트 케이스의 개수(<100)가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 100을 넘지 않는 단어가 공백으로 구분되어서 주어진다. 단어는 알파벳 소문자로만 이루어져 있다.

출력
각 테스트 케이스마다 애너그램인지 아닌지를 예체 출력과 같은 형식으로 출력한다. 

첫 입력 -> ++
두 입력 -> --
-1이 나오면 not
아니면 ok

문제를 잘못 이해해서 이상하게 풀었는데 이 접근법은 맘에 든다.
하지만 더 효율적인 알고리즘 있음
qwertyuiopasdfghjklzxcvbnm 26개
*/
#include<iostream>
#include<string>

using namespace std;

int main(){

    //int num[26] = {0};

    int n=0;
    cin>>n;

    string A;
    string B;
    string result = "";

    for(int i =0; i<n; i++){
        int num[26] = {0};
        cin>>A>>B;

        for(int j =0; j<B.length(); j++){
            num[A[j]-97]++;
        }

        cout<<"\ncheck A"<<endl;
        for(int o = 0; o<26; o++)
            cout<<num[o]<<" ";
        for(int k =0; k<A.length(); k++){
            num[B[k]-97]--;
            if(num[B[k]-97]==0){
                result = "";
            }
            else
                result = "NOT";
        }

        cout<<"\ncheck B"<<endl;
        for(int o = 0; o<26; o++)
            cout<<num[o]<<" ";

        cout<<A<<" & "<<B<<" are "<<result<<" anagrams."<<endl;

    }

    return 0;
}