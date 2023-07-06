#include <cstdio>
#include "../params.h"
#include "random.h"
#include <vector>

#include "common.hpp"

int main(int, char* argv[]) {
  long long seed = atoll(argv[1]);
  auto gen = Random(seed);

  int n = gen.uniform<int>(100, 1000);
  int m = gen.uniform<int>(100, 1000);

  int LIM_1 = A_MAX / n * 3;
  int LIM_2 = A_MAX / m * 3;

  vector<ll> A = rand_gen(gen, n, -LIM_1, +LIM_1, A_MAX);
  vector<ll> B = rand_gen(gen, m, -LIM_2, +LIM_2, A_MAX);
  out(A, B);

  return 0;
}
