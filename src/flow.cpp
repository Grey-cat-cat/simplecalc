#include "flow.h"


bool Graph::Bfs(int start, int finish) {
    std::fill(level_.begin(), level_.end(), -1);
    std::queue<int> queue;

    level_[start] = 0;
    queue.push(start);
    
    while (!queue.empty()) {
        int current = queue.front();
        queue.pop();
        for (auto& [path, capacity] : capacity_[current]) {
            if (level_[path] == -1 && capacity > 0) {
                level_[path] = level_[current] + 1;
                queue.push(path);
            }
        }
    }
    return level_[finish] != -1;
}

int Graph::Dfs(int current, int finish, int flow) {
    if (current == finish || flow == 0) {
        return flow;
    }
    
    for (auto& [path, capacity] : capacity_[current]) {
        if (level_[path] != level_[current] + 1) {
            continue;
        }
        int result_flow = Dfs(path, finish, std::min(capacity, flow));
        if (result_flow > 0) {
            capacity_[current][path] -= result_flow;
            capacity_[path][current] += result_flow;
            return result_flow;
        }
    }
    return 0;
}

Graph::Graph(int num_of_vertexes) 
    : level_(num_of_vertexes, -1), 
      capacity_(num_of_vertexes, std::unordered_map<int, int>()), 
      num_of_vertexes_(num_of_vertexes) {
}

void Graph::InsertEdge(int from, int to, int capacity) {
    capacity_[from][to] += capacity;
    capacity_[to][from] += 0;
}

int Graph::Dinic(int start, int finish) {
    int flow = 0;
    
    while (Bfs(start, finish)) {
        while (int current_flow = Dfs(start, finish, std::numeric_limits<int>::max())) {
            flow += current_flow;
        }
    }
    return flow;
}