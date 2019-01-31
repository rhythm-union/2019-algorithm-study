#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

class Matrix {
public:
    vector<vector<ull> > v;
    Matrix(int _h, int _w) {
        v.resize(_h);
        for (int i = 0; i < _h; i++) {
            v[i].resize(_w);
            fill(v[i].begin(), v[i].end(), 0ULL);
        }
    }
    
    vector<ull>& operator[] (const int i) {
        return v[i];
    }
    
    Matrix& operator* (const Matrix b) {
        Matrix ret(this->v.size(), b.v[0].size());
        
        for (int i = 0; i < this->v.size(); i++) {
            for (int j = 0; j < b.v[0].size(); j++) {
                for (int k = 0; k < this->v[i].size(); k++) {
                    ret[i][j] += (this->v[i][k] % 1000000ULL * b.v[k][j] % 1000000ULL) % 1000000ULL;
                }
            }
        }
        
        return (*this = ret);
    }
};

Matrix solution(Matrix& m, ull b) {
    if (b == 1) {
        return m;
    }
    
    Matrix ret = solution(m, b / 2ULL);
    if (b % 2 == 0) {
        return ret * ret;
    } else {
        return ret * ret * m;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    ull n; cin >> n;
    Matrix fibo(2, 2);
    fibo[0][0] = 1;
    fibo[0][1] = 1;
    fibo[1][0] = 1;
    fibo[1][1] = 0;
    Matrix a = solution(fibo, n);
    Matrix b(2, 1);
    b[0][0] = 1;
    b[1][0] = 0;
    
    Matrix ret = a * b;
    cout << ret[1][0] % 1000000ULL << '\n';
    
    return 0;
}

