#include<bits/stdc++.h>
using namespace std;

int INP,AM,REACHEOF;
#define BUFSIZE (1<<12)
char BUF[BUFSIZE+1], *inp=BUF;
#define GETCHAR(INP) { \
	if(!*inp && !REACHEOF) { \
		memset(BUF,0,sizeof BUF);\
		int inpzzz = fread(BUF,1,BUFSIZE,stdin);\
		if (inpzzz != BUFSIZE) REACHEOF = true;\
		inp=BUF; \
	} \
	INP=*inp++; \
}
#define DIG(a) (((a)>='0')&&((a)<='9'))
#define GN(j) { \
	AM=0;\
	GETCHAR(INP); while(!DIG(INP) && INP!='-') GETCHAR(INP);\
	if (INP=='-') {AM=1;GETCHAR(INP);} \
	j=INP-'0'; GETCHAR(INP); \
	while(DIG(INP)){j=(j<<3)+(j<<1)+(INP-'0');GETCHAR(INP);} \
	if (AM) j=-j;\
}

template <typename T> inline void writep(T x){
  if(x > 9)
    writep(x / 10);

  putchar(x % 10 + 48);
}
template <typename T> inline void write(T x){
  if(x < 0){
    putchar('-');
    x = -x;
  }

  writep(x);
}
template <typename T> inline void writeln(T x){
  write(x);
  putchar('\n');
}


const int N = 1e3 + 5;

long long d[N][N];
int n, m;
vector<pair<int, int>> g[N];

#define Node pair<long long, int>

void ijk(int st, long long *dist){
	priority_queue<Node, vector<Node>, greater<Node>> pq;
	for(int i = 0; i <= n; i++)
		dist[i] = 1e18;
	dist[st] = 0;
	pq.push({0, st});

	while(!pq.empty()){
		auto [du, u] = pq.top();
		pq.pop();

		if(dist[u] != du)
			continue;

		for(auto [v, w]: g[u])
			if(dist[v] > dist[u] + w)
				dist[v] = dist[u] + w,
				pq.push({dist[v], v});
	}
}

void solve(){
	GN(n); GN(m);

	for(int i = 1; i <= n; i++)
		g[i].clear();

	for(int i = 1, u, v, w; i <= m; i++){
		GN(u);
		GN(v);
		GN(w);

		g[u].push_back({v, w});
		// g[v].push_back({u, w});
	}

	for(int i = 1; i <= n; i++)
		ijk(i, d[i]);

	for(int i = 1; i <= n; i++){
		long long cur = 1e18;

		for(int j = 1; j <= n; j++)
			if(i != j) 
				cur = min(cur, d[i][j] + d[j][i]);

		if(cur == 1e18)
			writeln(-1);
		else
			writeln(cur);
	}
}

int main(){
	int t;
	for(cin >> t; t--; )
		solve();
	
	return 0; 
}