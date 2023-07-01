#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  for (double x = 0; x <= 5; x += 0.5) {
    double f= cos(3 * x) - 2 * x;
    cout << "x = " << x << ", f = " << f << std::endl;
  }
  return 0;
}