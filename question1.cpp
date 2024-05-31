//Starters 133 Division 4 (Rated)
//Q.name:-Powered Parameters

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> arr(N + 1);
    for (int i = 1; i <= N; ++i) {
      cin >> arr[i];
    }

    long long count = 0;

    for (int i = 1; i <= N; ++i) {
      long long left = static_cast<long long>(arr[i]);
      if (left == 1) {
        count += static_cast<long long>(N);
      } else {
        long long power = 1;
        for (int j = 1; j <= N; ++j) {
          if (power > numeric_limits<long long>::max() / left) {
            power = numeric_limits<long long>::max();
            break;
          }
          power *= left;
          long long right = static_cast<long long>(arr[j]);
          if (power <= right) {
            count++;
          }
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}
