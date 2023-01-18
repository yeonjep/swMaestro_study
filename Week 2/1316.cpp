#include <iostream>
#include <string>


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int wordNum=0;
    cin >> wordNum;
    
    char presentChar, pastChar;
    int output=0, check;
    int alphaArr[26];

    for(int i=0; i<wordNum; i++){
        fill_n(alphaArr, 26, 0);
        pastChar = '0';
        while((presentChar = getchar())!='\n'){
            if(pastChar=='0'){
                pastChar = presentChar;
                alphaArr[presentChar-97]++;
                check=1;
            }
            else if(presentChar != pastChar){
                pastChar = presentChar;
                if(alphaArr[presentChar-97]){
                    check=0;
                    while(getchar()!='\n');
                    break;
                }
                else
                    alphaArr[presentChar-97]++;
            }
        }
        if(check) output++;
    }

    cout << output << "\n";

    return 0;
}