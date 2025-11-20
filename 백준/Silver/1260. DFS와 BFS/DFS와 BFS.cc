#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, V;
vector<vector<int>> graph;
vector<bool> visited;

void dfs(int start)
{
	visited[start] = true;
	cout << start << " ";
	for (int i = 0; i < graph[start].size(); ++i)
	{
		int y = graph[start][i];
		if (!visited[y])
			dfs(y);
	}
}

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < graph[x].size(); ++i)
		{
			int y = graph[x][i];
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main()
{
	
	cin >> N >> M >> V;
	graph.resize(N + 1, vector<int>());
	visited.resize(N + 1, false);
	
	for (int i = 0; i < M; ++i)
	{
		int start, end;
		cin >> start >> end;
		graph[start].push_back(end);
		graph[end].push_back(start);
	}
	
	for (auto& g : graph)
		sort(g.begin(), g.end());
	
	dfs(V);
	visited.assign(N + 1, false);
	cout << endl;
	bfs(V);

	return 0;
}