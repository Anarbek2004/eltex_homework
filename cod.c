#include <iostream>
#define TWO 2

int main() {
  int n;
  std::cout << "Enter a natural number: ";
  std::cin >> n;

  int *result = new int(1);
  int *i = new int(0);

  while (*i < n) {
    *result *= TWO;
    (*i)++;
  }

  std::cout << "2 to power of " << n << " is equal to " << *result << std::endl;

  delete i;
  delete result;

  return 0;
}