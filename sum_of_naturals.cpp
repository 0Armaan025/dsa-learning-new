// we want something like , input: 6
// output = 1+2+3+4+5+6 => 21
// 1.) we ask for input
// 2.) we run a loop that reaches from 1 to number added
// 3.) we have an outside variable, that keeps n updating

#include <iostream>

int main() {

  long long number{};
  long long addition_number{0};
  std::cout << "Enter a number: ";
  if (std::cin >> number) {

    for (int i = 1; i <= number; i++) {
      addition_number = addition_number + i;
    }

    std::cout << "The total sum upto " << number << " is: " << addition_number
              << std::endl;
  }

  else {
    std::cout << "Invalid Input. Not a number." << std::endl;
    std::cout << "Returning with code -1, Exit!" << std::endl;
  }

  return 0;
}
