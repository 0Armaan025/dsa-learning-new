// these are basic problems to build our logic

// to check if a number is even, we:
// 1.) see if the number is properly divisble by 2 that means the remainder is 0
// 2.) to get remainder, we use the modulus operator (%)
// 3.) otherwise, we tell that the number is actually an odd

#include <iostream>

int main() {

  // idk what the user will write
  long long number{};
  std::cout << "Enter a number: ";
  if (std::cin >> number) {

    // now let's check

    if (number % 2 == 0) {
      // it's even

      std::cout << "The number " << number << " is even" << std::endl;
    }

    else {

      // it's odd
      std::cout << "The number " << number << " is odd" << std::endl;
    }
  }

  else {
    std::cout << "Invalid Input. Not a number." << std::endl;
    std::cout << "Returning with code -1, Exit!" << std::endl;
  }

  return 0;
}
