#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string temp;
    map <string, int> hear;
    for(int i=0; i<n; i++){
        cin >> temp;
        hear[temp]++;
    }

    vector <string> output;
    for(int i=0; i<m; i++){
        cin >> temp;
        if(hear[temp])
            output.push_back(temp);
    }  

    sort(output.begin(), output.end());
    cout << output.size() << "\n";
    for(auto o: output)
        cout << o << "\n";

    return 0;
}