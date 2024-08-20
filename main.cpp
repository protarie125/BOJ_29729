#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll s, n, m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s >> n >> m;
  auto top = 0;
  for (auto i = 0; i < n + m; ++i) {
    ll x;
    cin >> x;
    if (1 == x) {
      ++top;
      if (s < top) {
        s *= 2;
      }
    } else if (0 == x) {
      --top;
    }
  }

  cout << s;

  return 0;
}