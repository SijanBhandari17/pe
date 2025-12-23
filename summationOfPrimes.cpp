#include <iostream>
#include <vector>

#define SIZE 2000000

int main() {

  std::vector<int> bool_arr(SIZE, 1);
  long long sum = 0;
  int i = 0;

  for (i = 2; i * i < SIZE; i++) {
    if (bool_arr[i] == 1) {
      for (int j = i * i; j < SIZE; j = j + i) {
        bool_arr[j] = 0;
      }
    }
  }

  for (i = 2; i < SIZE; i++) {
    if (bool_arr[i] == 1) {
      sum += i;
    }
  }
  std::cout << sum;
}
