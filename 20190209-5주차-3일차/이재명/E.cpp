#include <stdio.h>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
int dist[501];
struct Q{
	int a,b,c;
};
vector<Q>map;
const int INF=987654321;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=0;i<M;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		map.push_back({a,b,c});
	}
	for(int i=2;i<=N;i++) dist[i]=INF;
	bool cycle=false;
	for(int i=0;i<=N;i++){
		bool changed=false;
		for(auto it : map){
			auto[a,b,c]=it;
			if(dist[a]!=INF&&dist[b]>dist[a]+c){
				dist[b]=dist[a]+c;
				changed=true;
			}
		}
		if(!changed) break;
		if(i==N) cycle=true;
	}
	if(cycle) printf("-1");
	else{
		for(int i=2;i<=N;i++) printf("%d\n",dist[i]==INF?-1:dist[i]);
	}
}

