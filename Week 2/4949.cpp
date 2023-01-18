#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr;
    stack<char> checkArr;
    int check=1;
    while(1){
        getline(cin, inputStr);
        if(!inputStr.compare(".")) break;
        
        while(!checkArr.empty()) checkArr.pop();

        if(check) check = 0;
        else      cout << "\n";

        for(int i=0; i<100; i++){
            if(inputStr[i]=='.'){
                if(!checkArr.empty()){
                    cout << "no";
                    break;
                }
                cout << "yes";
                break;
            }
            
            if(inputStr[i] == '(' || inputStr[i] == '[') 
                checkArr.push(inputStr[i]);
            else if(inputStr[i] == ')'){ 
                if(checkArr.empty() || checkArr.top() != '('){
                    cout << "no";
                    break;
                }          
                else checkArr.pop();
            }
            else if(inputStr[i] == ']'){
                if(checkArr.empty() || checkArr.top() != '['){
                    cout << "no";
                    break;
                }          
                else checkArr.pop();
            }
        }

    }

    return 0;
}