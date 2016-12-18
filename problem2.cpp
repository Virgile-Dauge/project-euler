#include <iostream>

using namespace std;

int fibSum(int const a, int const b, int sum, int const limit) {
  if (b < limit) {
    if (b % 2 == 0) {
      cout << b << endl;
      fibSum(b, a + b, sum + b, limit);
    } else {
      fibSum(b, a + b, sum, limit);
    }
  } else {
    return sum;
  }
}
int main(int argc, char *argv[]) {
  cout << fibSum(1, 1, 0, 4000000) << endl;
  return 0;
}
