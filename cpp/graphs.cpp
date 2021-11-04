#include <iostream>
#include <vector>
#include <queue>
#include <functional>

template<typename T>
std::vector<std::vector<T>> readGraph(unsigned size) {
	std::vector<std::vector<T>> result(size, std::vector<T>(size));
	
	for (unsigned i = 0; i < size; ++i) {
		for (unsigned j = 0; j < size; ++j) {
			std::cin >> result[i][j];
		}
	}
	return result;
}

template<typename T>
T dijkstra(std::vector<std::vector<T>> graph, unsigned origin, unsigned goal) {
	std::vector<bool> visited(graph.size());

	std::priority_queue<std::pair<unsigned, T>> queue(
		[](const std::pair<unsigned, T>& t1, const std::pair<unsigned, T>& t2) {
			return std::greater<T>(t1.second, t2.second);
		}
	);
	
	queue.push(std::make_pair<unsigned, T>(origin, 0));
	
	while (!queue.empty() && queue.top().first != goal) {
		std::pair<unsigned, T> current = queue.pop();
		unsigned node = current.first;
		T distance = current.second;

		if (visited[node])
			continue;
		
		for (unsigned i = 0; i < graph.size(); ++i) {
			if (i == node)
				continue;

			if (graph[node][i] != 0) {
				queue.push(std::make_pair(i, distance + graph[node][i]));
			}
		}

		visited[node] = true;
	}
	
	if (queue.empty()) {
		return -1;
	}

	return queue.top().second;
}
