

#include <cmath>
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
  for (int a = 1; a < 1000; a++) {
    for (int b = a + 1; b < 1000; b++) {
      int c = 1000 - a - b;
      if (a * a + b * b == c * c) {
        // It is now implied that b < c, because we have a > 0
        std::cout << a * b * c << "\n";
      }
    }
  }
  return 0;
}
