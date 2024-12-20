#include <iostream>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, M;
  cin >> N >> M;
  int S[N+1];
  for (int i = 1; i <= N; i++) {
    int x;
    cin >> x;
    S[i] = S[i-1] + x;
  }
  
  for (int i = 0; i < M; i++) {
    int start, end;
    cin >> start >> end;
    cout << S[end] - S[start-1] << "\n";
  }
}
