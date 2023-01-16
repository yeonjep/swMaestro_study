#include <iostream>
#include <string.h>
#include <istream>
using namespace std;

int main() {
  char arr[5][5];
  int i, j;
  int firstStrSize;

    cin.getline(arr[0], 6);

  firstStrSize = strlen(arr[0]);
  cout << firstStrSize << endl;
  

  return 0;
}