#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visited[100001] = {0};

struct node {
  vector<long long> neighbour;
};

long long bfs(long long, node *);

int main() {
  long long n,m;
  scanf("%lld %lld", &n, &m);
  node nodelist[n];
  long long a,b;
  while(m--) {
    scanf("%lld %lld", &a, &b);
    nodelist[a].neighbour.push_back(b);
    nodelist[b].neighbour.push_back(a);
  }

  long long connected = 0; //no of connected components
  long long total = 0;
  long long temp = 0;
  std::vector<int> count;
  for (long long i = 0; i < n; ++i) {
    if(!visited[i]) {
      temp = bfs(i, nodelist);
      count.push_back( temp );
      total += temp;
      connected++;
    }
  }
  long long answer = (total * (total - 1)) / 2;
  for (int i = 0; i < connected; ++i) {
    answer -= (count[i] * (count[i] - 1)) / 2;
  }
  printf("%lld", answer);

}

long long bfs(long long nod, node *nodelist) {
  int count = 0;
  queue<long long> Q;
  Q.push(nod);
  long long n;
  while(!Q.empty()) {
    n = Q.front();
    Q.pop();
    if(visited[n]) {
      continue;
    }
    visited[n] = true;
    count++;
    for (vector<long long>::iterator itr = nodelist[n].neighbour.begin(); itr != nodelist[n].neighbour.end(); ++itr) {
      if(!visited[*itr]) {
        Q.push(*itr);
      }
    }
  }
  return count;
}