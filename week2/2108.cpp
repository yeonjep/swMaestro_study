#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
/*
    통계학
    수 벡터에 받아서 정렬하기
    [출력]
    1 : 산술평균 // 평균값
    2 : 중앙값  // 인덱스 평균의 원소 
    3 : 최빈값  // 
    4 : 범위   // 정렬했을 때 마지막 원소 - 첫번째 원소
    ------
    최빈값 처리 
    ; 0 ~ 8000 인덱스까지 (in vector : count[i]) setting 후 수들을 입력받을때 증감 연산. 
      이후 반복문으로 가장 큰 값을 탐색하기. (변수 max를 0으로 초기화 해 놓고 그것보다 큰 값이 나오면 넣어준다.)
      이때의 인덱스를  tag 변수에 담아 놓기

    * 만약 최빈값이 두 개 이상일 경우 
    -> tag 다음 인덱스 부터 검사하면 됨. (max==count[i]인 두번째 경우가 나오자 마자 break)

*/
vector<int> input;
int main(){

    vector<int> count(8001,0);
    int n,num,sum,max,tag,mean,median,mode,range;
    sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>num;
        input.push_back(num);
        count[num+4000]++;
    }

    sort(input.begin(), input.end());
    sum=accumulate(input.begin(),input.end(),0);

    mean=round(double(sum)/n); // 1. 산술 평균
    median=input[(n-1)/2]; // 2. 중앙값
    range=input[n-1]-input[0]; // 4. 범위

    max=0;

    for(int i=0;i<8001;i++){
        if(max<count[i]){
            max=count[i];
            tag=i;
        }

    }
    for(int i=tag+1;i<8001;i++){
        if(max==count[i]){
            tag=i;
            break;
        }
    }
    mode=tag-4000;// 3. 
    cout<<mean<<"\n"<<median<<"\n"<<mode<<"\n"<<range<<endl;
    return 0;
}
