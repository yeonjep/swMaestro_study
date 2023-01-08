#include <iostream>

using namespace std;

int main(){
    int input, count=0;
    cin >> input;

    for(int a=1; a<=500; a++){
        for(int b=a; (a-b)*(a+b) <= input && b>0; b--){
            if((a-b)*(a+b)==input){
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}
