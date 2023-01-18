#include <iostream>
#include <string>


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int wordNum=0;
    cin >> wordNum;
    
    char pastChar;
    int output=0, check, j, strLength, alphaArr[26];
    string inputText;
    for(int i=0; i<wordNum; i++){
        fill_n(alphaArr, 26, 0);
        pastChar = '0';
        j=0;
        check=1;
        cin >> inputText;
        strLength = inputText.length();
        while(j < strLength){
            if(pastChar=='0'){
                pastChar = inputText[j];
                alphaArr[inputText[j]-97]++;
            }
            else if(inputText[j] != pastChar){
                pastChar = inputText[j];
                if(alphaArr[inputText[j]-97]){
                    check=0;
                    break;
                }
                else
                    alphaArr[inputText[j]-97]++;
            }
            j++;
        }
        if(check) output++;
    }

    cout << output << "\n";

    return 0;
}