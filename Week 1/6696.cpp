#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string a, b, temp1, temp2;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        temp1 = a;
        temp2 = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        if(a.compare(b))
            cout << temp1 << " & " << temp2 << " are NOT anagrams." << endl;
        else
            cout << temp1 << " & " << temp2 << " are anagrams." << endl;
    }


    
    

    return 0;
}