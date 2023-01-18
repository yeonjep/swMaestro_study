#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c, r, searchNum;
    cin >> c >> r >> searchNum;

    if(searchNum > c*r){
        cout << '0';
        return 0;
    }

    int **arr = new int*[r];
    for(int i=0; i<r; i++)
        arr[i] = new int[c];
    fill_n(arr, arr+c*r, 0);

    int index=1, x=0, y=0;
    while(1){
        for(int i=0; i<r; i++){
            arr[x][i] = index;
            if(index == )
            index++;
        }
    }


    for(int i=0; i<r; i++)
        delete arr[i];
    delete arr;
    return 0;
}