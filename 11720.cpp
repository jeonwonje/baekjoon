#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  string n;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < x; i++) {
    sum += n[i] - '0';
  }
  cout << sum;
}
