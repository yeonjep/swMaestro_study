#include <iostream>
#include <queue>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    queue <int> arr;
    for(int i=1; i<n+1; i++)
        arr.push(i);

    cout << "<";
    while(1){
        for(int i=0; i<k-1; i++){
            arr.push(arr.front());
            arr.pop();
        }
        cout << arr.front();
        arr.pop();
        if(!arr.empty()) cout << ", ";
        else break;
    }
    cout << ">";

    return 0;
}