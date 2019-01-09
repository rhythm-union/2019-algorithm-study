#include <cstdio>
#include <climits>

int main() {
    int n, arr[1000000], opt;
    scanf("%d", &n);

    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= n; i++) {
        opt = INT_MAX;
        if (i % 3 == 0) {
            if (1 + arr[i / 3] < opt) {
                opt = 1 + arr[i / 3];
            }
        }
        if (i % 2 == 0) {
            if (1 + arr[i / 2] < opt) {
                opt = 1 + arr[i / 2];
            }
        }
        if (1 + arr[i - 1] < opt) {
            opt = 1 + arr[i - 1];
        }
        arr[i] = opt;
    }
    printf("%d", arr[n]);

    return 0;
}
