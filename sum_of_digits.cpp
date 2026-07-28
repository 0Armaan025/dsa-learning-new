// so the idea is that we input a number like 340, we get each digit, and sum
// it, to get the digit, we can / by 10, but how do we get the length of the
// number? we'll just convert it to string for our convenience or we can just do
// number/= 10 every time in loop

#include <iostream>

int main() {
  int number{0};
  int sum{0};
  std::cout << "Enter a number: " << std::endl;

  std::cin >> number;

  while (number != 0) {
    sum = sum + (number % 10);
    number /= 10;
  }

  std::cout << "the sum of digits is: " << sum << std::endl;

  return 0;
}
