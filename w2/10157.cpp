#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> yVector, xVector;
  int i, j;
  int x, y;
  int key;

  cin >> x >> y;
  cin >> key;
  if (key > x * y) {
    cout << 0;
    return 0;
  }
  /* 
  예시: 7x9
  y +9 -> x +6 -> y -8 -> x -5 ...
  y: (1)+9 (3)-8 +7 -6 +5 ... +1 (-0:x가 먼저 끝나므로 실행 x) 
  x: (2)+6 (4)-5 ... + 0

  y는 y부터, x는 x-1부터 시작
  */

  /* dx, dy 벡터 만들기*/
  for (i = 0; i < y; i++)
    yVector.push_back(y - i);

  for (i = 0; i < x; i++)
    xVector.push_back(x - 1 - i);
  
  int tmp = key;
  int lesser = x < y ? x : y;
  char last;

  /* key(22번째 사람 -> key = 22)값에서  dx, dy의 절댓값을 key값이 음수가 될 때까지 빼줍니다 */
  for (i = 0; i < lesser; i++) {
    tmp -= yVector[i];
    if (tmp < 0) {
      last = 'y';
      tmp += yVector[i];
      break;
    }

    tmp -= xVector[i];
    if (tmp < 0) {
      last = 'x';
      tmp += xVector[i];
      break;
    }
  }
  // cout << "i : " << i << ", last: " << last << endl;

  int xPos, yPos, xAns, yAns;

  xPos = i - 1;
  yPos = last == 'y' ? i - 1 : i;

  if (i == 0) 
  xAns = 0; yAns = 0;
  // cout << "xVector[1] " << xVector[1] << endl;
  /* 음수가 되기 직전까지의 x,y델타 좌표를 더합니다 */
  for (j = 0; j <= xPos; j++) {
    xAns = j % 2 == 0 ? (xAns + xVector[j]) : (xAns - xVector[j]);  
    // cout << endl << "xAns: " << xAns << endl;
  }
  for (j = 0; j <= yPos; j++) {
    yAns = j % 2 == 0 ? yAns + yVector[j] : yAns - yVector[j];  
  }
  xAns += 1; // (1, 0)에서 시작
  // cout << "before last value: x: " << xAns << ", y: " << yAns << endl; 
  tmp = i % 2 == 0 ? tmp : -tmp;
  // cout << endl << "tmp: " << tmp << endl;
  if (last == 'x')
    xAns += tmp;
  else
    yAns += tmp;

  
  cout << xAns << " " << yAns;


  return 0;
}