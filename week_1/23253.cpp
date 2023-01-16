/*
 $N$권의 교과서는 각각 $1$부터 $N$까지의 번호가 매겨져 있다. 
w찬우는 각 더미의 맨 위에 있는 교과서만 꺼낼 수 있으며, 
반드시 교과서를 꺼낸 순서대로 나열해야 하기 때문에 번호순으로 나열하기 위해서는 
$1$번, $2$번, … $N - 1$번, $N$번 교과서 순으로 꺼내야 한다. '
교과서를 올바르게 나열할 수 없다면 중간고사 공부를 때려치겠다는 
찬우를 위해 번호순으로 나열할 수 있는지 여부를 알려주는 프로그램을 작성해 주자.

입력
첫째 줄에 교과서의 수 $N$, 교과서 더미의 수 $M$이 주어진다.

둘째 줄부터 $2\times M$줄에 걸쳐 각 더미의 정보가 주어진다.

 $i$번째 더미를 나타내는 첫 번째 줄에는 더미에 쌓인 교과서의 수 $k_{i}$ 가 주어지며, 두 번째 줄에는 $k_{i}$ 개의 정수가 공백으로 구분되어 주어진다.

각 정수는 교과서의 번호를 나타내며, 아래에 있는 교과서의 번호부터 주어진다.

교과서의 번호는 $1$부터 $N$까지의 정수가 한 번씩만 등장한다.

출력
올바른 순서대로 교과서를 꺼낼 수 있다면 Yes를, 불가능하다면 No를 출력한다.

1. 배열 동적 생성
2. 하나의 배열을 인덱싱으로 푸는 것

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    int n, m; // 교과서 수 n, 더미 수 m

    cin>>n>>m;

    vector<int> book;
    vector<int> temp;

    int num = 0, in;
    int result = 0;

    for(int i = 0; i<m; i++){
        cin>>num;
        book.resize(num, 0);
        temp.resize(num, 0);
        for(int j = 0; j < num; j++){
            cin>>in;
            //book.push_back(in);
            book[j]=in;
            temp[j]=in;
            //temp.push_back(in);
        }
        sort(temp.begin(), temp.end(), greater<>());
        //for(int k = 0; k < num; k++){
          //  cout<<"book : "<<book[k]<<" temp : "<<temp[k]<<endl;
        //}
        result = equal(book.begin(), book.end(), temp.begin(),temp.end())?result:1;
        //cout<<result<<endl;

    }

    if(result == 1)
        cout<<"No";
    else
        cout<<"Yes";


    return 0;
}