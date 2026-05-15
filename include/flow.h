#ifndef FLOW_H
#define FLOW_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <limits>

class Graph {
private:
    struct Edge {
        int from_;
        int to_;
        int capacity_;
    };

    std::vector<std::unordered_map<int, int>> capacity_;
    int num_of_vertexes_;
    std::vector<std::vector<int>> map_;
    std::vector<int> level_;

    bool Bfs(int start, int finish);
    int Dfs(int current, int finish, int flow);

public:
    explicit Graph(int num_of_vertexes);
    void InsertEdge(int from, int to, int capacity);
    int Dinic(int start, int finish);
};

#endif