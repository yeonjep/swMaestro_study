#include <iostream>
#include <string>

using namespace std;

int main(){
    string censor = "CAMBRIDGE";

    string input;
    cin >> input;

    for(int i=0; input[i]!=0; i++){
        if(input[i] != 'C' &&
           input[i] != 'A' &&
           input[i] != 'M' &&
           input[i] != 'B' &&
           input[i] != 'R' &&
           input[i] != 'I' &&
           input[i] != 'D' &&
           input[i] != 'G' &&
           input[i] != 'E')
           cout << input[i];
    }
    cout << endl;

    return 0;
}