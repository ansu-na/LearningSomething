// https://edabit.com/challenge/kndtkcSgavyiZkrW9

#include <iostream>
#include <vector>

#include <assert.h>

std::vector<int> collatz(int n) {
  int max = n;
  int steps = 0;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
    steps++;
    max = std::max(n, max);
  }
  return {steps, max};
}

int main() {
  assert(collatz(17) == (std::vector<int>{12, 52}));
  assert(collatz(6) == (std::vector<int>{8, 16}));
  assert(collatz(21) == (std::vector<int>{7, 64}));
  
  assert(collatz(1) == (std::vector<int>{0, 1}));
  assert(collatz(2) == (std::vector<int>{1, 2}));
  
  return 0;
}
