#include <cmath>
#include <iostream>
using namespace std;

int calculatePrime() {
  cout << "Hi" << endl;
  int count = 6;
  int i = 15;
  int lastPrime = 13;

  while (count < 10001) {
    bool isPrime = true;
    for (int j = 3; j <= ceil(sqrt(i)); j = j + 2) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << i << endl;
      lastPrime = i;
      count++;
    }
    i = i + 2;
  }
  return i - 2;
}
int main() {
  int lastPrime = calculatePrime();
  cout << "10001th Prime " << lastPrime << endl;
}
