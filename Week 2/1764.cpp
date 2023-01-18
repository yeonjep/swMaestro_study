#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string temp;
    vector <string> hear;
    for(int i=0; i<n; i++){
        cin >> temp;
        hear.push_back(temp);
    }

    sort(hear.begin(), hear.end());

    vector <string> output;
    vector <string>::iterator iter, wordBegin, wordEnd;
    for(int i=0; i<m; i++){
        cin >> temp;
        if(binary_search(hear.begin(), hear.end(), temp))
            output.push_back(temp);
    }

    sort(output.begin(), output.end());
    cout << output.size() << "\n";
    for(auto o: output)
        cout << o << "\n";

    return 0;
}