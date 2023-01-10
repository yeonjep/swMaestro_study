#include <iostream>
#include <string.h>
#include <istream>
using namespace std;

int main() {
  char arr[5][16];
  int i, j;

  for (i = 0; i < 5; i++)
    cin.getline(arr[i], 16); // getline의 두 번째 인자는 \0 포함한 개수 -> 16

/*
A A B C D D
a f z z 
0 9 1 2 1
a 8 E W g 6
P 5 h 3 k x
*/
 
  for (i = 0; i < 15; i++) { // ex) A열 -> A열 -> B열 -> C열 -> D열 -> D열
    for (j = 0; j < 5; j++) { // ex) A -> a -> 0 -> a -> P
    // j행의 string 길이 보다 i(출력하고자하는 줄)이 길면 continue
      if (i >= strlen(arr[j])) continue;
      else cout << arr[j][i];
    }
  }

  return 0;
}
