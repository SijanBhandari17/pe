#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<int> get_triplets(int *count) {
  vector<int> o = {};
  bool resultFound = false;
  for (int i = 500; i > 250 && !resultFound; i--) {
    cout << i << '\n';
    for (int j = 250; j < i; j++) {
      double k = sqrt(i * i - j * j);
      count++;

      if (fmod(k, 1) == 0 && i + j + k == 1000) {
        cout << "result found ";
        o.push_back((int)k);
        o.push_back(j);
        o.push_back(i);
        resultFound = true;
        break;
      }
    }
  }
  return o;
}

int main() {
  int count;
  vector<int> o = get_triplets(&count);
  for (const int &nums : o)
    cout << nums << ' ';
  cout << count;
}
