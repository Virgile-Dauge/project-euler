#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  long int n = 6008514755143;
  int lastFactor = 1;
  int factor = 3;
  if (n % 2 == 0) {
    n /= 2;
    lastFactor = 2;
    while (n % 2 == 0) {
      n /= 2;
    }
  }
  while (n > 1) {
    if (n % factor == 0) {
      n /= factor;
      lastFactor = factor;
      while (n % factor == 0) {
        n /= factor;
      }
    }
    cout << "factor : " << factor << endl;
    factor = factor + 2;
  }
  cout << "factor : " << factor << endl;
  return 0;
}
