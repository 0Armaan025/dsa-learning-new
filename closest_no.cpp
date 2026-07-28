// so if we I write 200, and ask for the closest no that is divisible
// properly(i.e remainder is 0) by 4 then I should just add or subtract acc to
// the the remainder i get

#include <iostream>

int main() {

  int number{0};
  int div_no{0};
  std::cout << "Enter the number: " << std::endl;

  std::cin >> number;

  std::cout << "Enter the no you wanna divide " << number
            << " by: " << std::endl;

  std::cin >> div_no;

  int remainder = number % div_no;

  if (remainder == 0) {
    std::cout << "The closest number is: " << number << " itself" << std::endl;
  } else {
    std::cout << "The closest number is: " << (number - remainder) << " "
              << std::endl;
    std::cout << "Answer: " << (number - remainder) << " / " << div_no << " = "
              << (number - remainder) / div_no << std::endl;
  }

  return 0;
}
