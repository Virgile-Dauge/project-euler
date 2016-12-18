#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
bool isOk(int n) {
  for (int i = 1; i <= 20; i++) {
    if (0 != n % i) {
      return false;
    }
  }
  return true;
}
int main(int argc, char *argv[]) {
  int smallestNumber = 1;
  while (true) {
    if (isOk(smallestNumber)) {
      cout << smallestNumber;
      return 0;
    }
    smallestNumber++;
  }
  return 0;
}
