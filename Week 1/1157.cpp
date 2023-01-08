#include <iostream>
#include <string>

using namespace std;

int main(){
    int letterCheck[26]={};
    string input;

    cin >> input;

    for(int i=0; input[i]!=0; i++){
        input[i] = toupper(input[i]);
        letterCheck[input[i]-65]++;
    }

    int mostFreq=0;
    for(int i=1; i<26; i++){
        if(letterCheck[i] > letterCheck[mostFreq])
            mostFreq = i;
    }

    for(int i=0; i<26; i++){
        if(letterCheck[i] == letterCheck[mostFreq] && (i!=mostFreq)){
            cout << '?' << endl;
            return 0;
        }
    }

    cout << (char)(mostFreq+65) << endl;

    return 0;
}
