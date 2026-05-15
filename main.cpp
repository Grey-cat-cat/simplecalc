#pragma once
#include "flow.h"

int main() {
  int n = 0;
  int m = 0;
  int from = 0;
  int to = 0;
  int cap = 0;

  std::cin >> n >> m;

  Graph gr(n);

  for (int i = 0; i < m; i++) {
    std::cin >> from >> to >> cap;
    gr.InsertEdge(from, to, cap);
  }

  int start = 0;
  int end = 0;

  std::cin >> start >> end;

  if (start < 0 || start >= n) {
    start = 0;
  }

  if (end < 0 || end >= n) {
    end = n - 1;
  }

  std::cout << gr.Dinic(start, end);
  return 0;
}
