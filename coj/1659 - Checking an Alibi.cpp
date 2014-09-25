#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

#define MAX 510
#define Node pair<int, int>
#define INF 1 << 30

struct cmp {
	
	bool operator() (const Node &a, const Node &b) {

		return a.second > b.second;
	}
};

vector<Node> adjArr[MAX];
int distances[MAX];
bool visited[MAX];
priority_queue<Node, vector<Node>, cmp> p_queue;
int vertices_num;
int previous[MAX];

int f;

void init() {

	for (int i = 0; i <= f; ++i) {

		distances[i] = INF;
		visited[i] = false;
		previous[i] = -1;
	}
}

void relaxation(int current, int adjacent, int weight) {

	if(distances[current] + weight < distances[adjacent]) {

		distances[adjacent] = distances[current] + weight;
		previous[adjacent] = current;
		p_queue.push(Node(adjacent, distances[adjacent]));
	}
}

int dijkstra(int initial) {

	init();
	p_queue.push(Node(initial, 0));
	distances[initial] = 0;
	int current, adjacent, weight;

	while(!p_queue.empty()) {

		current = p_queue.top().first;
		p_queue.pop();

		if(visited[current])	continue;
		visited[current] = true;

		for (int i = 0; i < adjArr[current].size(); ++i) {

			adjacent = adjArr[current][i].first;
			weight = adjArr[current][i].second;

			if (!visited[adjacent]) {

				relaxation(current, adjacent, weight);
			}
		}
	}

	//printf( "Distancias mas cortas iniciando en vertice %d\n" , initial );
	//printf("Vertice %d , distancia mas corta = %d\n" , initial , distances[ 1 ] );
    
    return distances[1];
}

int main() {

	int c, p, m, f1, f2, t;
	int initials[MAX];
	scanf("%d %d %d %d", &f, &p, &c, &m);
	queue<int> posible_guilty_cows;

	while(p--) {

		scanf("%d %d %d", &f1, &f2, &t);
		adjArr[f1].push_back(Node(f2, t));
		adjArr[f2].push_back(Node(f1, t));
	}

	for (int i = 0; i < c; ++i)
	{
		scanf("%d" , &initials[i] );
		if (dijkstra(initials[i]) <= m) {

			posible_guilty_cows.push(i + 1);
		}
	}

	printf("%d\n", posible_guilty_cows.size());

	while(!posible_guilty_cows.empty()) {

		printf("%d\n", posible_guilty_cows.front());
		posible_guilty_cows.pop();
	}

}


// barn is in vertex 1