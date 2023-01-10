#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int input=0;
    while(1){
        cin >> input;
        if(input==-1) break;
        
        int output[100000]={1, }, index=1, sum=1;
        for(int i=2; i<sqrt(input); i++){
            if(input%i == 0){
                output[index++] = i;
                sum += i;
                output[index++] = input/i;
                sum += input/i;
            }
        }
        
        sort(output, output+index);
        if(sum==input){
            cout << input;
            for(int j=0; j<index; j++){
                if(j==0) cout << " = ";
                else cout << " + ";
                cout << output[j];
            }
        }
        else
            cout << input << " is NOT perfect.";
        cout << endl;
    }
}