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

    int index=0, direction=1, x=0, y=-1;
    while(index<searchNum){
        for(int i=0; i<r; i++){
            y+=direction;
            index++;
            if(index==searchNum) 
                cout << x+1 << " " << y+1;
        }
        for(int i=0; i<c-1; i++){
            x+=direction;
            index++;
            if(index==searchNum) 
                cout << x+1 << " " << y+1;
        }
        direction *= -1;
        c--;
        r--;
    }

    

    return 0;
}