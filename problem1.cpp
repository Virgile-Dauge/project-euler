#include <iostream>

using namespace std;
// Basic solution, looping from 0 to 999;
int main(int argc, char *argv[]) {
  int sum;
  for (int i = 0; i < 1000; ++i) {
    /* code */
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
