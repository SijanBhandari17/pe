#include <iostream>

using namespace std;

int smallestMultiple() {
  int smallestMultiple = 20;
  while (true) {
    bool divisibleByAll = true;
    for (int j = 11; j < 20; j++) {
      if (smallestMultiple % j != 0) {
        divisibleByAll = false;
      }
    }
    if (divisibleByAll)
      break;
    smallestMultiple += 20;
  }
  return smallestMultiple;
}

int main() {
  int smallesMultiple = smallestMultiple();
  cout << "Smallest Multiple: " << smallesMultiple << endl;
}
