#include <iostream>
#include <string>

using namespace std;

int main(){
    string blackBoard[5];

    int max=0;
    for(int i=0; i<5; i++){
        cin >> blackBoard[i];
        if(blackBoard[i].length() > max)
            max = blackBoard[i].length();
    }

    for(int i=0; i<max; i++){
        for(int j=0; j<5; j++){
            if(i<blackBoard[j].length())
                cout << blackBoard[j][i];
        }
    }
}