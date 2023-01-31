#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int printCount;
    cin >> printCount;

    int n, m, temp, count;
    vector<int> printer;
    while (printCount--){
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> temp;
            printer.push_back(temp);
        }
        count=0;

        while(1){
            temp = *max_element(printer.begin(), printer.end());
            if(temp == printer[m] && m==0) break;
            while(printer[0] != temp){
                printer.push_back(printer[0]);
                printer.erase(printer.begin());
                m--;
            }
            if(temp == printer[m] && m==0) break;
            printer.erase(printer.begin());
            n--;
            m--;
            if(m<0) m+=(n+1);
            count++;
        }

        count++;
        cout << count << "\n";
        printer.clear();
    }

    return 0;
}