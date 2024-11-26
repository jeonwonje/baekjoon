#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int N, M;
  cin >> N >> M;
  int i = 0, j = N - 1, count = 0;
  vector<int> A(N, 0);
  
  for (int i = 0; i < N; i++) {
    int j;
    cin >> j;
    A[i] = j;
  }
  
  sort(A.begin(), A.end());

  while (i < j) {
    int sum = A[i] + A[j];
    if (sum > M) {
      j--;
    } else if (sum < M) {
      i++;
    } else {
      i++;
      j--;
      count++;
    }
  }
  cout << count;
}
