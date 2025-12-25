#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t find_factors(int64_t number) {
  int64_t largest = 0;
  while (number % 2 == 0) {
    number /= 2;
    largest = 2;
  }

  for (int64_t i = 3; i * i <= number; i = i + 2) {
    while (number % i == 0) {
      number /= i;
      largest = i;
    }
  }
  if (number > 2)
    largest = number;

  return largest;
}

int main() {
  int64_t number;
  cout << "Enter the number: " << endl;
  cin >> number;
  int64_t factors = find_factors(number);
  cout << factors;
}
