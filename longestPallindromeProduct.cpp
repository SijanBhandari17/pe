#include <iostream>
#include <math.h>

bool is_pallindrome(int number) {
  int original = number;
  int reversed_number = 0;
  int last_term = 0;
  while (number > 0) {
    last_term = number % 10;
    reversed_number = reversed_number * 10 + last_term;
    number = number / 10;
  }
  bool result = reversed_number == original;
  // std::cout << result << '\n';
  return result;
}
int find_other_number() {
  int largest_pallindrome = 0;
  int product_term = 0;
  int incremental_j = 0;
  int j = 0;
  for (int i = 999; i > 100; i--) {
    if (i % 11 == 0) {
      incremental_j = 1;
      j = i;
    } else {
      j = 990;
      incremental_j = 11;
    }
    for (j; j > 100; j = j - incremental_j) {
      product_term = j * i;
      if (is_pallindrome(product_term) && product_term > largest_pallindrome) {
        largest_pallindrome = product_term;
      }
    }
  }
  return largest_pallindrome;
}
int main() {
  int other_integer = find_other_number();
  std::cout << other_integer << std::endl;
}

// int pallindrome_product() {}
