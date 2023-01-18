#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

    int bookNum=0, groupNum=0;
    cin >> bookNum >> groupNum;
    
    int present=0, maxIndex=0, before=0;
    bool chk=true;
    for(int i=0; i<groupNum; i++){
        cin >> maxIndex;
        before = bookNum +1;
        for(int j=0; j<maxIndex; j++){
            cin >> present;
            if(before < present){
                chk = false;
                break;
            }
            before = present;
        }
        if(!chk) break;
    }
    
    cout << (chk ? "Yes" : "No");
    return 0;
}