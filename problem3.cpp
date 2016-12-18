#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  long long n = 600851475143;
  int factor = 2;
  int lastFactor = 1;
  while (n > 1) {
    if (n % factor == 0) {
      lastFactor = factor;
      n /= factor;
      while (n % factor == 0) {
        n /= factor;
      }
    }
    factor = factor + 1;
  }
  cout << "factor : " << lastFactor << endl;
  return 0;
}
