// 1.) we get a number
// 2.) we run a loop and multiply at the same time with (the number with a no
// that increases every time in the loop(i)) 3.) and show in the way we want

#include <iostream>

int main() {

  long long number{};
  std::cout << "Enter a number: ";
  if (std::cin >> number) {

    for (int i = 0; i <= 20; i++) {
      std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
  }

  else {
    std::cout << "Invalid Input. Not a number." << std::endl;
    std::cout << "Returning with code -1, Exit!" << std::endl;
  }

  return 0;
}
