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
  int limit = 10001;
  int count = 1;
  int candidate = 1;
  while (count != limit) {
    candidate = candidate + 2;
    if (isPrime(candidate))
      count++;
  }
  cout << candidate;
  return 0;
}
