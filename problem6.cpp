#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
  int sumOfsquares = 0;
  int squareOfSum = 0;
  for (int i = 1; i <= 100; i++) {
    sumOfsquares += i * i;
    squareOfSum += i;
  }
  cout << squareOfSum * squareOfSum - sumOfsquares;
  return 0;
}
