#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int N;
  cin >> N;
  int count = 0;
  vector<int> A(N, 0);
  
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  sort(A.begin(), A.end());

  for (int k = 0; k < N; k++) {
    int find = A[k];
    int i = 0, j = N - 1;
    while (i < j) {
      int sum = A[i] + A[j];
      if (sum == find) {
        if (i != k && j != k) {
          count++;
          break;
        } else if (i == k) {
          i++;
        } else if (j = k) {
          j--;
        }
      } else if (sum > find) {
        j--;
      } else {
        i++;
      }
    }
  }
  cout << count;
}
