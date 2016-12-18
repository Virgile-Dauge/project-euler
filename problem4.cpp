#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
bool isPalydrome(int n) {
  vector<int> digits;
  while (n) {
    digits.push_back(n % 10);
    n /= 10;
  }
  for (int i = 0; i < digits.size() / 2; i++) {
    if (digits[i] != digits[digits.size() - i - 1])
      return false;
  }
  return true;
}
int main(int argc, char *argv[]) {
  int maxPal = -1;
  for (int i = 999; i >= 0; i--) {
    for (int j = 999; j >= 0; j--) {
      //   cout << i * j << endl;
      if (isPalydrome(i * j)) {
        if (i * j > maxPal) {
          maxPal = i * j;
        }
      }
    }
  }
  cout << maxPal;
  return 0;
}
