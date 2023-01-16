#include <iostream>
#include <string>
using namespace std;



int main() {
  int T;
  string s, s2;
  bool flag = false;


  int alphabet[27] = {0 };
  cin >> T;

  for(int q=0; q<T; q++) {

    for(int a=0; a<27; a++) {
      alphabet[a] = 0;
    }

    flag = false;

    cin >> s >> s2;

    if(s.length() != s2.length()) { 
      cout << s << " & " << s2 << " are NOT anagrams." << endl;
    }
    else {                          // 두 문자열의 길이가 같다면
      for(int i=0; i<s.length(); i++) {
        alphabet[s.at(i)-96]++;
      }

      for(int j=0; j<s2.length(); j++) {
        if(alphabet[s2.at(j)-96] <= 0) {        
          cout << s << " & " << s2 << " are NOT anagrams." << '\n';
          flag = false;
          break;
        } else if(alphabet[s2.at(j)-96] > 0) {  
          alphabet[s2.at(j)-96]--;
        }
        flag = true;
      }
      if(flag == true) cout << s << " & " << s2 << " are anagrams." << '\n';
    }

  }

  return 0;
}
