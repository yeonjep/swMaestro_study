#include <iostream>
#include <vector>

using namespace std;

int num, target;
vector<int> arr;
int count=0;

void search(int cur, int sum){
    if(cur == num){
        if(sum == target)
            count++;
        return;
    }

    search(cur+1, sum);
    search(cur+1, sum + arr[cur]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num >> target;

    int temp=0;
    for(int i=0; i<num; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    search(0, 0);
    if(target==0) count--;
    cout << count;


    return 0;
}