#include <cmath>
#include <iostream>

using namespace std;
bool isPrime(int n) {
  if (1 == n)
    return false;
  if (4 > n)
    return true;
  if (n % 2 == 0)
    return false;
  if (9 > n)
    return true;
  if (n % 3 == 0)
    return false;
  int rounded = floor(sqrt(n));
  int f = 5;
  while (rounded >= f) {
    if (n % f == 0)
      return false;
    if (n % (f + 2) == 0)
      return false;
    f += 6;
  }
  return true;
}
int main(int argc, char *argv[]) {
  long sum = 0;
  for (int i = 0; i < 2000000; i++) {
    if (isPrime(i)) {
      sum += i;
    }
  }
  std::cout << sum << "\n";
  return 0;
}
