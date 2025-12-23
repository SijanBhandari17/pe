#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number) {
  if (number <= 1) {
    return false;
  }
  if (number == 2)
    return true;
  if (number % 2 == 0) {
    return false;
  } else {
    int upperLimit = ceil(sqrt(number));
    for (int i = 3; i <= upperLimit; i = i + 2) {
      if (number % i == 0)
        return false;
    }
    return true;
  }
}
int find_factors(int number) {
  int largest = 0;
  while (number % 2 == 0) {
    largest = 2;
    number /= 2;
  }
  for (int i = 3; i * i <= number; i = i + 2) {
    while (number % i == 0) {
      largest = i;
      number /= i;
    }
  }
  return largest;
}

int main() {
  int number;
  cout << "Enter the number: " << endl;
  cin >> number;
  int factors = find_factors(number);
  cout << factors;
}
