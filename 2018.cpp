#include <iostream>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int N;
  int start = 1, end = 1, sum = 1, count = 1;
  cin >> N;
  
  while (end != N) {
    if (sum == N) {
      end++;
      sum += end;
      count++;
    } else if (sum < N) {
      end++;
      sum += end;
    } else if (sum > N) {
      sum -= start;
      start++;
    }
  }
  
  cout << count;
  
}
