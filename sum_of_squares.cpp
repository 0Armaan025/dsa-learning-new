// 1.) what we want is something like input: 3, answer = 1^2 + 2^2 + 3^2 => 1 +
// 4 + 9 => 14 2.) exactly same as before, with sum of naturals, just we're
// gonna add i^2 instead

#include <cmath>
#include <iostream>

int main() {
  // ik im stupid enough for long long
  long long number{};
  long long addition_number{0};
  std::cout << "Enter a number: ";
  if (std::cin >> number) {

    for (int i = 1; i <= number; i++) {
      addition_number = addition_number + (pow(i, 2));
    }

    std::cout << "The total sum (square) upto " << number
              << " is: " << addition_number << std::endl;
  }

  else {
    std::cout << "Invalid Input. Not a number." << std::endl;
    std::cout << "Returning with code -1, Exit!" << std::endl;
  }

  return 0;
}
