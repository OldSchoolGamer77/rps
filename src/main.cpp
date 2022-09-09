#include <time.h>
#include <cstdlib>
#include <iostream>

int main() {
  srand(time(NULL));
  int n = rand() % 3;
  std::cout << n;
  return 0;
}
