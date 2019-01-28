#include <vector>
#include <stdio.h>
using namespace std;
typedef vector<vector<long long>> matrix;
const long long mod = 1000LL;
matrix operator * (const matrix &a, const matrix &b) {
	int n = a.size(), m=b.size(), l=b[0].size();
	matrix c(n, vector<long long>(l));
	for (int i=0; i<n; i++) for (int j=0; j<l; j++) for (int k=0; k<m; k++) c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod;
	return c;
}
matrix mpower(matrix a, long long b){
	if(b==0){
		matrix ret(a.size(),vector<long long>(a.size()));
		for(int i=0;i<a.size();i++) ret[i][i]=1;
		return ret;
	}
	else{
		matrix ret=mpower(a,b/2);
		if(b%2==0)return ret*ret;
		else return ret*ret*a;
	}
}
int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	matrix M(N,vector<long long>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%lld",&M[i][j]);
			M[i][j]%=mod;
		}
	}
	matrix ret=mpower(M,K);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++) printf("%lld ",ret[i][j]);
		printf("\n");
	}
	
}
