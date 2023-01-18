#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    vector <string> output;

    for(int i=0; i<input.length(); i++){
        output.push_back(input.substr(i, input.length()-i));
    }

    sort(output.begin(), output.end());
    for(auto o: output)
        cout << o << "\n";

    return 0;
}