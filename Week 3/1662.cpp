#include <iostream>
#include <string>
#include <vector>

using namespace std;

int search(string str, int mult, int length, int *index){
    int count=0, temp;
    for(;(*index) < length; (*index)++){
        if(str[*index] == '('){
            temp = (*index)-1;
            (*index)++;
            count--;
            count += search(str, str[temp]-'0', length, index);
        }
        else if(str[*index] == ')')
            return count*mult;
        else
            count++;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    int length = input.length();
    int index = 0;

    cout << search(input, 1, length, &index);

    return 0;
}