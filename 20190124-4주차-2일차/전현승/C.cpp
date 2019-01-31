#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

class Matrix {
public:
    vector<vector<ull> > v;
    Matrix(int _w, int _h) {
        v.resize(_h);
        for (int i = 0; i < _w; i++) {
            v[i].resize(_w);
            fill(v[i].begin(), v[i].end(), 0ULL);
        }
    }
    
    vector<ull>& operator[] (const int i) {
        return v[i];
    }
    
    Matrix& operator* (const Matrix b) {
        Matrix ret(this->v.size(), this->v.size());
        
        for (int i = 0; i < this->v.size(); i++) {
            for (int j = 0; j < b.v.size(); j++) {
                for (int k = 0; k < this->v[i].size(); k++) {
                    ret[i][j] += (this->v[i][k] % 1000ULL * b.v[k][j] % 1000ULL) % 1000ULL;
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
    
    int n; ull b; cin >> n >> b;
    Matrix m(n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    
    Matrix res = solution(m, b);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] % 1000ULL << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}

